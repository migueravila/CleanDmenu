<div align="center">
<h1>CleanDmenu</h1>
<b>🚀 Floating and enhanced dmenu build</b>
</div>

<p align="center">
  <img src="https://github.com/MiguelRAvila/ZenDmenu/blob/master/rsc/ss.png">
</p>

### Patches

- Center dmenu
- Floating in the top of screen
- Search Highlight
- Lineheight
- More Colors
- Cleaner design (Removed '<' and '>')

### Installation

> This script will replace your actual dmenu build. Make all the backups you need

1. Clone this repo with `git clone https://github.com/MiguelRAvila/CleanDmenu.git`
2. Run `cd CleanDmenu`
3. Run `sudo make install`
4. Now you can run it with `dmenu_run` 
5. ENJOY! 🚀

### Customization

> 🌟 You can customize the *width*, *font* and *colors* in the `config.h` file.

##### Colors:

You can modify colors here (line 10), I wrote some comments for an easy change.

```h
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cccccc", "#1C1B1D" },
	[SchemeSel] = { "#0F0F0F", "#98C379" }, 
	[SchemeSelHighlight] = { "#0F0F0F", "#98C379" },
	[SchemeNormHighlight] = { "#cccccc", "#1C1B1D" },
	[SchemeOut] = { "#000000", "#98C379" },
	[SchemeMid] = { "#d7d7d7", "#1f2026" },
};
```

##### Width:

In line 3: `static int min_width = 400;` You change the numeric value for a different width

##### Font:

In line 6: `"Proxima Nova:size=11"` You can change the font and size. (You'll need to have the font in order to use the build. You can find it here: [Font](https://github.com/MiguelRAvila/Dotfiles/blob/master/.fonts/FontsFree-Net-proxima_nova_reg-webfont.ttf)) 
