# ZenDmenu
> ### ⚡  My customized and patched build of dmenu 

![](https://github.com/MiguelRAvila/ZenDmenu/blob/master/rsc/ss.png)

### Patches

- Center dmenu
- Search Highlight
- Lineheight
- More Colors
- Numbers

### Installation

1. Clone this repo with `git clone https://github.com/MiguelRAvila/ZenDmenu.git`
2. Run `cd ZenDmenu`
3. Run `sudo make install`
4. Now you can run it with `dmenu_run -c -l 15` (`-c` flag is for center and `-l 15` is for the list style with 15 elements)  
5. ENJOY! 🚀

### Customization

> #### 🌟 You can customize the *width*, *font* and *colors* in the `config.h` file.

##### Colors:

You can modify colors here (line 10), I wrote some comments for an easy change

![](https://github.com/MiguelRAvila/ZenDmenu/blob/master/rsc/code1.png)

##### Width:

In line 3: `static int min_width = 400;` You change the numeric value for a different width

##### Font:

In line 6: `"Proxima Nova:size=11"` You can change the font and size. 
