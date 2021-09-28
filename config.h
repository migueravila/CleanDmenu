static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 1030;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Inter:size=9:bold",
	"JoyPixels:pixelsize=9:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e3e1e4", "#2D2A2E" },
	[SchemeSel] = { "#2D2A2E", "#9ecd6f" }, 
	[SchemeSelHighlight] = { "#2D2A2E", "#9ecd6f" },
	[SchemeNormHighlight] = { "#e3e1e4", "#2D2A2E" },
	[SchemeOut] = { "#2D2A2E", "#9ecd6f" },
	[SchemeMid] = { "#9ecd6f", "#2D2A2E" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 24;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
