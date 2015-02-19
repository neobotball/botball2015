////WARNING, THIS IS OUT OF DATE. THE BUILDERS HAVE MADE CHANGES TO THE CREATE'S DESIGN SINCE WE WRITE THIS//

//This file should be entirely comments//
//It should pass through gcc without any kind of compilation happening//
//the .c extention is just for syntax highlighting//
//PSEUDO CODE FOR CREATE MODULE//

//I assume this will be off center, so we don't place the cubes in front of botguy

//the miniservos will be 0 and 1
//I assume that their 0 position will be as FAR in as possible
//the big servo will me 2, its 0 will be as far DOWN(i think) as possible

//connect to create
//rotate in place
//wait for the proper amount of time to make it rotate 90 degrees
//stop the wheels
//lower the big arm down so that the cubes are inside it.
//make ms0 move in
//make ms1 move in (in the other direction)
//this grabs the cube
//move the big servo up, thus picking the cubes off the floor
//drive forward until the arm is holding the cubes above the wood thing
//wait the right amount of time to make it reach
//stop the wheels
//lower the big servo so that the cubes are sitting on the piece of wood
//make miniservo(0) move out
//make miniservo(1) move out 
//drive backward so that when centering it doesn't knock things around
//only wait for a fraction of a second, so that it only moves back a very little

//WE NEED TO WORK ON THIS PART
//somehow center the army thing in front of botguy
//WE NEED TO WORK ON THIS PART

//drive forward FAST, so as to knock botguy off
//only a small amount though, so it doesn't shake the wood and so it is kind of jerky
//quickly drive back
//only a little
//rotate in place
//make it go 90 degrees
//drive all the way ot the edge
//drive worward, parrallell to the wood thing
//use the other arm to scrape everything into the 'caldera'
