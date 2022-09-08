########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libevdebug.pri
#
# Author: $author$
#   Date: 9/8/2022
#
# generic QtCreator project .pri file for framework evx static library libevdebug
########################################################################

########################################################################
# libevdebug
XOS_LIB_EVDEBUG_VERSION_BUILD_DATE = 9/8/2022 #$$system(~/bin/utility/tdate)

# libevdebug TARGET
#
libevdebug_TARGET = evdebug
libevdebug_TEMPLATE = lib
libevdebug_CONFIG += staticlib

# libevdebug INCLUDEPATH
#
libevdebug_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# libevdebug DEFINES
#
libevdebug_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_EVDEBUG_VERSION_BUILD_DATE=$${XOS_LIB_EVDEBUG_VERSION_BUILD_DATE} \

########################################################################
# libevdebug OBJECTIVE_HEADERS
#
#libevdebug_OBJECTIVE_HEADERS += \
#$${EVX_SRC}/xos/lib/evdebug/version.hh \

# libevdebug OBJECTIVE_SOURCES
#
#libevdebug_OBJECTIVE_SOURCES += \
#$${EVX_SRC}/xos/lib/evdebug/version.mm \

########################################################################
# libevdebug HEADERS
#
libevdebug_HEADERS += \
$${EVX_SRC}/os/evdebug/evdebug.h \

# libevdebug SOURCES
#
libevdebug_SOURCES += \
$${EVX_SRC}/os/evdebug/evdebug.c \

########################################################################

