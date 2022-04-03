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
