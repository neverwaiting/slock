/* user and group to drop privileges to */
static const char *user  = "wintersun";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#005577",   /* after initialization */
	[INPUT] =  "#ffd700",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
