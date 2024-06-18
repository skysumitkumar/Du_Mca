import pymysql
#Create Database
cr.execute("CREATE DATABASE college")
db=pymysql.connect(host="127.0.0.1",user="root",password="",db="college")
cr=db.cursor()
#Create table
cr.execute("CREATE TABLE room(roomid NUMERIC(10) PRIMARY KEY,name VARCHAR(20),address VARCHAR(50))")
#Insert into table
a="yes"
a=input("enter yes if you want to insert into table ")
if(a=="yes"):
 while(a!="no"):
   print("enter the room number, name and address one by one  ")
   b=input()
   c=input()
   d=input()
   qrl="INSERT INTO room(roomid,name,address)VALUES(%s,%s,%s)"
   value=(b,c,d)
   cr.execute(qrl,value)
   print("enter the choice yes or no if you want to enter the data into table")
   a=input()
   #Check Table data
   print("the data you have enterd are")
   print("\n")
   cr.execute("SELECT*FROM room")
   result = cr.fetchall()
   for i in result:
     print(i)
 db.commit() 
 #Deete tuple fom table
e="yes" 
print("enter yes if you want to delete any tupple from the table room")
e=input()
if(e=="yes"):
  print("enter the name you want to delete form the room table")
  w=input()
  qrl= "DELETE FROM room WHERE name = %s"
  name=(w) 
  cr.execute(qrl,name)
  cr.execute("SELECT* FROM room")
  print("after the deletion")
  result = cr.fetchall()
  for i in result:
      print(i)
  db.commit()   
   #Update tuple
t="yes"
print("nter yes if you want to update any tupple")
t=input()
if(t=="yes"):
  print("enter the name of the person you wated to update ")
  u=input()
  print("now enter the new name")
  o=input()
  qrl= "UPDATE room SET name=%s WHERE name = %s"
  put=(o,u)
  cr.execute(qrl,put)
  print("after the updation of that particulr tupple")
  cr.execute("SELECT* FROM room")
  result= cr.fetchall()
  for i in result:
    print(i)
  db.commit()  

