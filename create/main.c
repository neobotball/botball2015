////WARNING, THIS IS OUT OF DATE. THE BUILDERS HAVE MADE CHANGES TO THE CREATE'S DESIGN SINCE WE WRITE THIS//


//I assume this will be off center, so we don't place the cubes in front of botguy

//the miniservos will be 0 and 1
//I assume that their 0 position will be as far IN as possible
//the big servo will be 2, its 0 will be as far DOWN(i think) as possible
int main() {
    create_connect(); //connect to create
    create_drive_direct(250, -250); //rotate in place //note this may rotate in the wrong direction
    msleep(600); //wait for the proper amount of time to make it rotate in place
    //stop the wheels //NOTHING HERE RIGHT NOW//
    set_servo_position(0, 100); //make miniservo(0) move in //the position may need to be more or less than 100, depending on how the miniservo is mounted.  that's up to the builders. at this point it's just kind of a placeholder
    set_servo_position(1, 100); //make miniservo(1) move in (in the other direction) //again, 100 as a placeholder
    set_servo_position(2, 1300); //move the big servo up, thus picking the cubes off the floor //again, placeholder number, no idea how hig it will actually have to go
    create_drive_direct(200, 200); //drive forward until the arm is holding the cubes above the wood thing
    msleep(2000); //wait the right amount of time to make it reach //placeholder
    //stop the wheels //NOTHING HERE RIGHT NOW//
    set_servo_position(2, 1000); //lower the big servo so that the cubes are sitting on the piece of wood //placeholder
    set_servo_position(0, 1000); //make miniservo(0) move out //placeholder
    set_servo_position(1, 1000); //make miniservo(1) move out
    create_drive_direct(-200, -200); //drive backward so that when centering it does not knock things around
    msleep(350); //only wait for a fraction of a second so that it only moves a very little

//WE NEED TO WORK ON THIS PART
//somehow center the army thing in front of botguy
//WE NEED TO WORK ON THIS PART

    create_drive_direct(400, 400); //drive forwardi FAST, so as to knock botguy off
    msleep(300); //only a small amount though, so it doesn't shake the wood and so it is kind of jerky //placeholder
    create_drive_direct(300, 300); //quickly drive back
    msleep(400); //only a little
    create_drive_direct(-250, 250); //rotate in place //this may go the wrong direction
    msleep(600); //make it go 90 degrees
    //drive all the way to the edge
//drive worward, parrallell to the wood thing
//use the other arm to scrape everything into the 'caldera'
}
