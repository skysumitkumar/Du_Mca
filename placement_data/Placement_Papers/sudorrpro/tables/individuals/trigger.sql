create or replace trigger compdel
before delete on company
for each row
begin
delete from field where c_name=:old.cname;
end;
/