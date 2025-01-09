# interactive_linked_list

This project is a project I used to learn linked lists manipulation and optimination

USAGE
    On a linux computer, open a terminal and while being in the repository directory, enter the "make" command.
    Then, a binary named "interactive_linked_list" is created. To use this project, type "./interactive_linked_list".
    Then you can type all sorts of commands:
        - ADD [type] [name], ... (type can be WIRE, ACTUATOR, DEVICE, SENSOR, or PROCESSOR, and names can be anything. This command add the element to the linked list)
        - DEL [id], ... (id is the id of the element you want to delete)
        - DISP (display the linked list)
        - SORT [sort type](sort type can be by NAME, by TYPE, or by ID)
    You can push this project to its limits by adding a lot of stuf and then try sorting by different sorting types.
    If you want you can create a file with all the commands separated by a line break.

    Exemple:

    Add WIRE usb, ADD PROCESSOR i5, ADD DEVICE laptop
    DISP
    SORT NAME
    DISP
    SORT ID
    DISP
    DEL 2
    DISP

    If there is an error in the command, the program will stop and exit with 84.