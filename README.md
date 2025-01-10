# interactive_linked_list
\
This project is a project I used to learn linked lists manipulation and optimination\
\
USAGE\
    - On a linux computer, open a terminal and while being in the repository directory, enter the "make" command.\
    - Then, a binary named "interactive_linked_list" is created. To use this project, type "./interactive_linked_list".\
    - Then you can type all sorts of commands:\
    >>>> add [type] [name], ... (type can be WIRE, ACTUATOR, DEVICE, SENSOR, or PROCESSOR, and names can be anything. This command add the element to the linked list)\
    >>>> del [id], ... (id is the id of the element you want to delete)\
    >>>> disp (display the linked list)\
    >>>> sort [sort type](sort type can be by NAME, by TYPE, or by ID)\
    >>>> exit (exit the program)\
    - You can push this project to its limits by adding a lot of stuf and then try sorting by different sorting types.\
    - If you want you can create a file with all the commands separated by a line break.\
\
    Exemple:\
\
    add WIRE usb, PROCESSOR i5, DEVICE laptop\
    disp\
    sort NAME\
    disp\
    sort ID\
    disp\
    del 2\
    disp\
    exit\
\
    If there is an error in the command, the program will stop and exit with 84.
