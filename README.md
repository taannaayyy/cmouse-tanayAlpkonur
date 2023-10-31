# cmouse-tanayAlpkonur

###  **Purpose**
The program is designed to provide a platform for capturing and processing mouse input events in a Linux environment on real time.

### **Usage**
    
**1)Running the program:**

Give access to executable using:
    
    chmod +x /cmouse-tanayAlpkonur/bin/main

To run the program, execute the compiled binary:

    sudo ./main

**2)Interpreting Output:**

The program outputs the position of the mouse relative to the middle point of the screen.
The output will include values for the X and Y coordinates.

###  **Safety Concerns**
**Root Privileges:**

Accessing /dev/input/mice typically requires root privileges. 
Therefore, the program may need to be run with elevated permissions (sudo ./main) which can pose security risks. 

**System Stability:**

The program interacts directly with system-level input devices. 
Mishandling or misinterpreting mouse events could potentially lead to system instability or unexpected behavior.

**Compatibility:**

The program assumes a Linux environment and may not work on other operating systems without modification.
The program might need modification changing 'mice' after accessed to '/dev/input/'.  

**Error Handling:**

If 'mice' can not be found on its directory, program outputs an error text.  