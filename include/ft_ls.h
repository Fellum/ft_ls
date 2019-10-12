#ifndef FT_LS_H
#define FT_LS_H

#include "arg_parser.h"
#include "sys/stat.h"

typedef struct      s_filedata
{
	mode_t			premissions;
	uid_t			user_id;
	gid_t			group_id;
	off_t			size;
	char			*name;
	nlink_t			h_links;
	struct timespec	mtime;
	struct timespec atime;
	struct timespec	ctime;
}                   t_filedata;

int ft_ls(t_argdata *args);

#endif
