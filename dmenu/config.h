/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "GohuFont Nerd Font Mono:size=18" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*               fg         bg         */
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#282828", "#d79921" },
	[SchemeOut] = { "#8ec07c", "#d65d0e" },
    [SchemeMid] = { "#ebdbb2", "#3c3836" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
