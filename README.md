# Josephus-problem

The problem is named after Flavius Josephus, a Jewish historian living in the 1st century. According to Josephus' account of the siege of Yodfat, he and his 40 soldiers were trapped in a cave, the exit of which was blocked by Romans. They chose suicide over capture and decided that they would form a circle and start killing themselves using a step of three. Josephus states that by luck or possibly by the hand of God, he and another man remained the last and gave up to the Romans.

###Test example

Enter the number of persons in a circle:
9
Enter a step:
5

       place index: 0 1 2 3 4 5 6 7 8 
     person number: 1 2 3 4 5 6 7 8 9 	initial condition
  next_alive_index: 1 2 3 4 5 6 7 8 9 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 1 2 3 4 0 6 7 8 9 	 person with place index 4 is killed
  next_alive_index: 1 2 3 5 5 6 7 8 9 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 2 3 4 0 6 7 8 9 	 person with place index 0 is killed
  next_alive_index: 1 2 3 5 5 6 7 8 1 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 2 3 4 0 6 0 8 9 	 person with place index 6 is killed
  next_alive_index: 1 2 3 5 5 7 7 8 1 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 2 3 0 0 6 0 8 9 	 person with place index 3 is killed
  next_alive_index: 1 2 3 5 5 7 7 8 1 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 2 0 0 0 6 0 8 9 	 person with place index 2 is killed
  next_alive_index: 1 2 3 5 5 7 7 8 1 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 2 0 0 0 0 0 8 9 	 person with place index 5 is killed
  next_alive_index: 1 2 3 5 5 7 7 8 1 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 2 0 0 0 0 0 8 0 	 person with place index 8 is killed
  next_alive_index: 1 2 3 5 5 7 7 8 1 


       place index: 0 1 2 3 4 5 6 7 8 
     person number: 0 0 0 0 0 0 0 8 0 	 person with place index 1 is killed
  next_alive_index: 1 2 3 5 5 7 7 8 1 

