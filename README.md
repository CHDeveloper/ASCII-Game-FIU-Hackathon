# ASCIIGame

A simple ASCII Game. Move using WASD.

# Level Editor
To create a new level, you must first specify the doors of the level, and then draw them out using ASCII characters. The ASCII key is:

# - for walls
. - for air
@ - for player

Doors are written like this:

Doors
\<doorID\> \<Level-file\> \<x-coordinate-of-player\> \<y-coordinate-of-player\> \<connecting-door-in-adjacent-room\> ,
.
.
.                                                                                                           end

