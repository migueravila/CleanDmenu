static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 400;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Proxima Nova:size=10"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*              foreground  background */
	[SchemeNorm] = { "#eaeaea", "#1F2229" },  /* Background color */
	[SchemeSel] = { "#1F2229", "#88c0d0" }, /* Main selection color */
	[SchemeSelHighlight] = { "#1F2229", "#88c0d0" }, /* Highlight slectioned color */
	[SchemeNormHighlight] = { "#1F2229", "#a3be8c" }, /* Highlight no-slectioned color */
	[SchemeOut] = { "#000000", "#00ffff" }, /* Secondary Color */
	[SchemeMid] = { "#eaeaea", "#1F2229" }, /* Secondary Color */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 18;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */


