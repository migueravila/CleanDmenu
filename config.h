//    ___ _               ___
//   / __| |___ __ _ _ _ |   \ _ __  ___ _ _ _  _
//  | (__| / -_) _` | ' \| |) | '  \/ -_) ' \ || |
//   \___|_\___\__,_|_||_|___/|_|_|_\___|_||_\_,_|

static int topbar = 1;
static int centered = 1;
static int min_width = 1105;
static const char *fonts[] = {
	"Proxima Nova:size=9.6",
	"JoyPixels:pixelsize=8:antialias=true:autohint=true"};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = {"#cccccc", "#1C1B1D"},
	[SchemeSel] = {"#1C1B1D", "#98C379"},
	[SchemeSelHighlight] = {"#1C1B1D", "#98C379"},
	[SchemeNormHighlight] = {"#cccccc", "#1C1B1D"},
	[SchemeOut] = {"#000000", "#98C379"},
	[SchemeMid] = {"#d7d7d7", "#1f2026"},
};

static unsigned int lines = 0;
static unsigned int lineheight = 18;

static const char worddelimiters[] = " ";

static unsigned int border_width = 0; /* -bw option; to add border width */