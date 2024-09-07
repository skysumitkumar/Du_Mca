create table user_account
(
name varchar2(50) primary key,
password varchar2(10),
superuser char(1),
constraint uachk check(superuser in('y','n')));
