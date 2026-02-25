Main modifications:
- Made the header files disk.h and system.h using the cpp files provided and the reference manual.
- Fixed the missing code in system.cpp and disk.cpp that was indicated by the hints, specifically the uniform and distance functions.
- The code now rund an animation successfully for at least 1000 steps.

How to navigate:
- To clone the repository run "git clone (path to the bundle) test2" then navigate to the folder using "cd test2".
- To view the changes and commits run "git log --oneline".
- To view the repository from a previous commit run "git checkout (code)" where (code) is the one given for that commit in "git log --oneline".
- To view the history of specific files, "git log -- (file)" where (file) is the name of the file, for example "git log -- disk.h".

Result of code: 
- The C++ code sets up a simulation of disks moving randomly inside of a box. It outputs the result of the simulation at each step in a file inside a folder.
- The python file view.py takes the outputs and combines them into an animation to visualise the data.
- The simulation sets up the disks along the left side of the box then randomises their movement for at least 1000 steps after that. 
- The box is solid so the centres of the disks cannot be randomised to a point outside of the boundaries, however the disks can overlap outside the box as the position is calculated from the centre of the disk. 

Possible improvements:
- Prevent overlap with the box boundary by adding the disk radius in the position calculation to account for the disk size.
- Adding collision with other disks to make it potentially more realistic.
- These changes depend on the actual function of the program for whether they are actually useful and should be added.

How to run: 
- In the terminal compile using "g++ main.cpp system.cpp disk.cpp -o simulation". 
- Then run with "./simulation" to get the data output. 
- Then run the python script view.py, for example "python3 view.py", to run the animation of the simulation data.


