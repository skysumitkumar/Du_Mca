create table student_recruited
(
sid number primary key,
name varchar2(25) not null,
year date,
mobile varchar2(15),
land_line varchar2(20),
status varchar2(5),
selected_in varchar2(20) ,
constraint stu_frn foreign key(selected_in) references company(cname),
constraint chk check (status in('cs','sb'))
);

