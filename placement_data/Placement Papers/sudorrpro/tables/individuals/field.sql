create table field
(
 f_name varchar2(20),
 c_name varchar2(30),
 constraint f_pk primary key(f_name,c_name),
 constraint f_fk foreign key(c_name) references
 company(cname));
/