# -*- coding: utf-8 -*-
"""
Created on Fri Oct 15 17:36:03 2021

@author: Pranay Kumar(21BEE0276)
"""

        #SPECIAL SEQUENCES#
        
   # \A #

import re

txt = "The rain in Spain"
#Check if the string starts with # 
x = re.findall("\AThe",txt)
print(x)

if x:
    print("Yes, there is a match.")
else:
    print("No match")
    
            #####
            
import re

txt = "The rain in Spain" 
#Check if in begining of a word#
x = re.findall(r"\bain",txt)
print(x)

if x:
    print("Yes, there is a match.")
else:
    print("No match")            

            #####

import re

txt = "The rain in Spain" 
#Check if end of a word#
x = re.findall(r"ain\b",txt) #same as \B in begining then it checks word ending# 
                              #with string and vice versa when \B in the begining#
print(x)

if x:
    print("Yes, there is a match.")
else:
    print("No match")  

            #####     
    
    # \d - prints digit ; \D - prints characters except digit#
    
import re

txt = "The rain in Spain from 9.00 am"

x = re.findall("\d",txt)
y = re.findall("\D",txt)
 
print (x,y)

            #####
 
    # \s - space charecter ; \S - returns except space#         
import re

txt = "The rain in Spain" 

x = re.findall("\s",txt)
y = re.findall("\S",txt)

print(x , y)

            #####
    # \w - only alphabets and digits(_) ; \W - other than alpha & dig#  
import re

txt = "The rain in Spain $$ @9:00 _" 

x = re.findall("\w",txt)
y = re.findall("\W",txt)

print(x , y)    

            ###
   # \Z same as metacharacter $#
import re

txt = "The rain in Spain" 

x = re.findall("Spain\Z",txt)
y = re.findall("Spain$",txt)

print(x , y)    

                ######
     
   #WRITE A PROGRAM THAT MATCHES A STRING THAT HAS AN 'a' FOLLOWED BY ANYTHING IN 'b'#

import re

txt = input("Enter a string: ")

x = re.findall("^a.*b$",txt)
print(x)
 
if x:
    print("Yes, there is a match")
else:
    print("No")            
        
               ########
   
    #  WRITE A PROGRAM THAT MATCHES A WORD WITH 'z'#
      
import re

txt = input("Enter a string: ")

x = re.findall("[zZ]",txt)
print(x)
 
if x:
    print("Yes, there is a match")
else:
    print("No")     
                
                ########
                
    #WRITE A PROGRAM TO FIND SEQUENCE OF LOWER CASE JOINED WITH AN UNDERSCORE#
    #INCOMPLETE #
import re

txt = input("Enter a string: ")

x = re.findall("\w.+_\w",txt)
print(x)
 
if x:
    print("Yes, there is a match")
else:
    print("No")      

                 #######

    #SETS 
    
import re

txt = "The rain in Spain" 

x = re.findall("[arn]",txt)

print(x)  

        ###

import re

txt = "The rain in Spain" 

x = re.findall("[^a-n]",txt)  #^ - except [a-n] #

print(x)  

        ###
        
import re
  # Same as \d #
txt = "The rain in Spain from 3:00 am to 7:00 pm" 

x = re.findall("[0-3]",txt)

print(x)  

        ###
        
import re

txt = "The rain 8 in Spain at 11:34 am" 

x = re.findall("[1-9][0-9]",txt)

print(x) 

        ###
        
import re

txt = "The rain 8 in Spain at 11:34 am" 
  # incomplete only 8 needed #
x = re.findall("[0-9][1-9]",txt)

print(x)

        ###
        
import re

txt = "The rain 8 in Spain at 11:34 am" 

x = re.findall("[:]",txt)

print(x) 

            #######

    #MOBILE NUMBER VERIFICATION#

x = input("Enter the mobile number: ")

if x.isdigit:
    if len(x) != 10:
        print("Mobile number NOT valid")
    elif x[0] == '0':
        print("Mobile Number is NOT valid")
    else:
        print("Mobile Number IS valid")
else:
    print("Mobile number not valid")
    
     #MOBILE NO VERIFICATION WITH REGULAR EXPRESSION#
import re

x = input("Enter the mobile number: ")
            
y = re.findall("[1-9][0-9]{9}",x)
 
print(y)

if y:
    print("VALID NO.")
else:
    print("NOT VALID")          
            
             #########

 # PAN CARD VALID OR NOT (ABCDE1234A)#
            
import re

x = input("Enter the PAN number: ")
            
y = re.findall("[A-Z]{5}[0-9]{4}[A-Z]",x)
 
print(y)

if y:
    print("VALID NO.")
else:
    print("NOT VALID")              
            
            
            
            
            
