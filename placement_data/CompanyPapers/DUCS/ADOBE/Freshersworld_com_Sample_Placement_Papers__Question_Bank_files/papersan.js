//The following line is critical for menu operation, and MUST APPEAR ONLY ONCE.
menunum=0;menus=new Array();_d=document;function addmenu(){menunum++;menus[menunum]=menu;}function dumpmenus(){mt="<scr"+"ipt language=JavaScript>";for(a=1;a<menus.length;a++){mt+=" menu"+a+"=menus["+a+"];"}mt+="<\/scr"+"ipt>";_d.write(mt)}
//Please leave the above line intact. The above also needs to be enabled if it not already enabled unless you have more than one _array.js file
timegap=10                   // The time delay for menus to remain visible
followspeed=3                 // Follow Scrolling speed
followrate=3                 // Follow Scrolling Rate
suboffset_top=5               // Sub menu offset Top position
suboffset_left=10             // Sub menu offset Left position



GrayOrange=[                  // GrayOrange is an array of properties. You can have as many property arrays as you need
"FFFFFF",                     // Mouse Off Font Color
"3366EE",                     // Mouse Off Background Color (use zero for transparent in Netscape 6)
"000000",                     // Mouse On Font Color
"3366EE",                     // Mouse On Background Color
"3366EE",                     // Menu Border Color
"10",                         // Font Size (default is px but you can specify mm, pt or a percentage)
"normal",                     // Font Style (italic or normal)
"Bold",                     // Font Weight (bold or normal)
"verdana,arial,helvetica",  // Font Name
2,                            // Menu Item Padding or spacing
,                             // Sub Menu Image (Leave this blank if not needed)
0,                            // 3D Border & Separator bar
,                             // 3D High Color
,                             // 3D Low Color
"ffffff",                     // Current Page Item Font Color (leave this blank to disable)
"3366EE",                     // Current Page Item Background Color (leave this blank to disable)
,                             // Top Bar image (Leave this blank to disable)
,                             // Menu Header Font Color (Leave blank if headers are not needed)
,                             // Menu Header Background Color (Leave blank if headers are not needed)
"BDBCBA",                     // Menu Item Separator Color
]


addmenu(menu=[
"menu1",                // Menu Name - This is needed in order for this menu to be called
69,                          // Menu Top - The Top position of this menu in pixels
178,                           // Menu Left - The Left position of this menu in pixels
,                          // Menu Width - Menus width in pixels
1,                            // Menu Border Width
,                             // Screen Position - here you can use "center;left;right;middle;top;bottom" or a combination of "center:middle"
GrayOrange,                   // Properties Array - this array is declared higher up as you can see above
1,                            // Always Visible - allows this menu item to be visible at all time (1=on or 0=off)
,                             // Alignment - sets this menu elements text alignment, values valid here are: left, right or center
"Shadow(color=777777, Direction=135, Strength=0)",// Filter - Text variable for setting transitional effects on menu activation - see above for more info
,                            // Follow Scrolling Top Position - Tells this menu to follow the user down the screen on scroll placing the menu at the value specified.
1,                            // Horizontal Menu - Tells this menu to display horizontaly instead of top to bottom style (1=on or 0=off)
0,                            // Keep Alive - Keeps the menu visible until the user moves over another menu or clicks elsewhere on the page (1=on or 0=off)
,                             // Position of TOP sub image left:center:right
,                             // Set the Overall Width of Horizontal Menu to specified width or 100% and height to a specified amount
0,                            // Right To Left - Used in Hebrew for example. (1=on or 0=off)
0,                            // Open the Menus OnClick - leave blank for OnMouseover (1=on or 0=off)
,                             // ID of the div you want to hide on MouseOver (useful for hiding form elements)
,                             // Background image for menu Color must be set to transparent for this to work
0,                            // Scrollable Menu
,                             // Miscellaneous Menu Properties
,"&nbsp;SignUP &nbsp;","http://www.freshersworld.com/signup/signup.htm","#",,1
,"&nbsp;&nbsp;Hot Jobs &nbsp;","http://www.freshersworld.com/jobs/hotjobs.asp","#",,1
,"&nbsp;&nbsp;Placement Papers &nbsp;&nbsp;","http://www.freshersworld.com/papers/papers.htm","#",,1
,"&nbsp;&nbsp;Careers &nbsp;&nbsp;","http://www.freshersworld.com/careers/careers.htm","#",,1
,"&nbsp;&nbsp;Campus Pulse &nbsp;","http://www.freshersworld.com/campus/campus.htm","#",,1
,"&nbsp;&nbsp;Recruiters &nbsp;","http://www.freshersworld.com/recruit/recruit.htm","#",,1
,"&nbsp;&nbsp;Discussion Forum &nbsp;","http://www.freshersworld.com/forum","#",,1

])


dumpmenus();

