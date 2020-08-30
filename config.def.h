static int topbar = 20;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Proxima Nova:size=10"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*              foreground  background */
	[SchemeNorm] = { "#eaeaea", "#0f0f0f" },  /* Background color */
	[SchemeSel] = { "#0f0f0f", "#e6d6ac" }, /* Main selection color */
	[SchemeSelHighlight] = { "#1F2229", "#e6d6ac" }, /* Highlight slectioned color */
	[SchemeNormHighlight] = { "#1F2229", "#e68183" }, /* Highlight no-slectioned color */
	[SchemeOut] = { "#000000", "#00ffff" }, /* Secondary Color */
	[SchemeMid] = { "#eaeaea", "#0f0f0f" }, /* Secondary Color */
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