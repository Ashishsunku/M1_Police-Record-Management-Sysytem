# Requirements for food ordering mini project #

## Identifying features ##

* Police officers can login to portal and access the Record management system
* It shows the data of criminals
* can add new criminal
* And can make changes to the previous data
* Exit


## ADVANTAGES ##

* Data is available for police officers and they will quickly decide the person who is criminal or not
* Identifying the criminal persons very easily with the available data

## DISADVANTAGES ##
* LESS SCOPE to improve data security

## what,why,where,who,how ##
### what ###
* implementation of online application for police record management system
### where ###
* it is an online application
### who ###
* Ashishsunku implemented a problem statement
### how ###
* This application is implemented and problem is solved using c programming 

# Test plan and Test output #
## High level test plan ##
|HLR_ID|	Description|	Expected i/p	|Expected o/p	|Actual o/p|	Test type|
|----|----|----|----|----|----|
|HLR_1|	Entering the admin page|admin|if correct user going to enter password|if correct user going to enter password|requirement|
|HLR_2|	Entering the password|admin|if correct user going to enter admin page|if correct user going to enter admin page going to choose the visible options|requirement|
|HLR_3|After choosing option can continue|show all the inputs given by user|if user want to exit choosing option|if user want to exit choosing option|requirement

## Low level test plan ##
|HLR_ID|	Description	|Expected i/p|	Expected o/p|	Actual o/p|	Test type|
|----|----|----|----|----|----|
|LLR_1_HLR_1|user can give admin in char type|-|-|-|-|			
|LLR_2_HLR_1|asking admin password|admin|if correct user going to enter password|if correct user going to  enter password|requirement|
|LLR_3_HLR_1|Show all the options in page|-|-|-|-|
|LLR_1_HLR_2|Enter the criminal data|check for previous data |-|-|requirement|
|LLR_2_HLR_3|criminaldata is not available| add new | new | - |requirement| 
|LLR_1_HLR_4|Exit|-|-|-|-|

# Manual #
## Setup to run Project ##
* An integrated development environment (Suggesting Dev C++).
* GCC compiler to compile the project.
* "make" to run the Makefile smoothly.
## Steps To run Project ##
* First clone the repository from the Github.
* Open the repository in an IDE (Suggesting Dev C++).
* The next step is to build the project with the help of make command :
   * make all
* Next step is to run the project with help of make command :
   * make exec
* Clean all executable files by the following command :
   * make clean
