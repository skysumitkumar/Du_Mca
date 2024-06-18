create type location as object
(
street_addr varchar2(50),
state varchar2(30),
city varchar2(20),
zip_code varchar2(10),
tel_no varchar2(15));
/
create or replace type select_proc as object
(
  test char(1),
  gd char(1),
  interview char(1));
/
create or replace type recruit_history as object
(
 pay number(4,2),
 stud_recruit number,
 visited_date date,
 proc select_proc
 );
/
create or replace type contact as object
(
 hr_name varchar2(15),
 email varchar2(50),
 mobile varchar2(15),
 land_line varchar2(15)
 );
/
create or replace type recruit_policy as object
(
  pay number(5,2),
  requirements number,
  proc select_proc,
  constraints varchar2(50));
/
create or replace type recruit_tab as table of recruit_history;
/
create or replace type contact_tab as table of contact;
/
create or replace type location_tab as table of location;
/
create table company
 (
   cname varchar2(25) primary key,
   visiting_date date,
   established date,
   ceo varchar2(20),
   website varchar2(50),
   status varchar2(10),
   revenue number(15,3),
   profit number(15,3),
   rec_hist recruit_tab,
   contact_detail contact_tab,
   rec_policy recruit_policy,
   comp_location location_tab)
   nested table rec_hist store as rec_hist_tab,
   nested table contact_detail store as cont_tab,
   nested table comp_location store as loc_tab;

create table student_recruited
(
sid number primary key,
name varchar2(25) not null,
year date,
mobile varchar2(15),
land_line varchar2(20),
selected_in varchar2(20) 
);
create table field
(
 f_name varchar2(20),
 c_name varchar2(30),
 constraint f_pk primary key(f_name,c_name),
 constraint f_fk foreign key(c_name) references
 company(cname));

create table user_account
(
name varchar2(50) primary key,
password varchar2(10),
superuser char(1),
constraint uachk check(superuser in('y','n')));

create or replace trigger compdel
before delete on company
for each row
begin
delete from field where c_name=:old.cname;
end;
/

