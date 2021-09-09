static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 960;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Inter:size=10:bold",
	"JoyPixels:pixelsize=10:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#E0DEF4", "#191724" },
	[SchemeSel] = { "#191724", "#9CCFD8" }, 
	[SchemeSelHighlight] = { "#191724", "#9CCFD8" },
	[SchemeNormHighlight] = { "#E0DEF4", "#1C1B1D" },
	[SchemeOut] = { "#191724", "#9CCFD8" },
	[SchemeMid] = { "#E0DEF4", "#191724" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 28;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
