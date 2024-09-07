create type recruit_policy as object
(
  pay number(5,2),
  requirements number,
  proc select_proc,
  constraints varchar2(50));
/
