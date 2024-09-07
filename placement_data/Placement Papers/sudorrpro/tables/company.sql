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

