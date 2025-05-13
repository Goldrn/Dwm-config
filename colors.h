
extern char normfgcolor[];
extern char normbgcolor[];
extern char normbordercolor[];
extern char normfloatcolor[];

extern char selfgcolor[];
extern char selbgcolor[];
extern char selbordercolor[];
extern char selfloatcolor[];

extern char titlenormfgcolor[];
extern char titlenormbgcolor[];
extern char titlenormbordercolor[];
extern char titlenormfloatcolor[];

extern char titleselfgcolor[];
extern char titleselbgcolor[];
extern char titleselbordercolor[];
extern char titleselfloatcolor[];

extern char tagsnormfgcolor[];
extern char tagsnormbgcolor[];
extern char tagsnormbordercolor[];
extern char tagsnormfloatcolor[];

extern char tagsselfgcolor[];
extern char tagsselbgcolor[];
extern char tagsselbordercolor[];
extern char tagsselfloatcolor[];

extern char hidnormfgcolor[];
extern char hidselfgcolor[];
extern char hidnormbgcolor[];
extern char hidselbgcolor[];

extern char urgfgcolor[];
extern char urgbgcolor[];
extern char urgbordercolor[];
extern char urgfloatcolor[];
void read_colors(char* path_to_file, char** color_array_internal);

int defcolors();
