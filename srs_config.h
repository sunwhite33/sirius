/*
 * Copyright (C) sunwhite
 */

#ifndef _SRS_CONFIG_H_INCLUDED_
#define _SRS_CONFIG_H_INCLUDED_

#define SRS_LINUX 1

#if (SRS_LINUX)
    #include <srs_linux_config.h>
#elif (SRS_FREEBSD)
    #include <srs_freebsd_config.h>
#elif (SRS_SOLARIS)
    #include <srs_solaris_config.h>
#elif (SRS_WIN32)
    #include <srs_win32_config.h>
#else /* POSIX */
    #include <srs_posix_config.h>
#endif

#endif /* _SRS_CONFIG_H_INCLUDED_ */

