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
#   File: tyacc.pro
#
# Author: $author$
#   Date: 9/8/2022
#
# os specific QtCreator project .pro file for framework txde executable tyacc
########################################################################
#
# Debug: txde/build/os/QtCreator/Debug/bin/tyacc
# Release: txde/build/os/QtCreator/Release/bin/tyacc
# Profile: txde/build/os/QtCreator/Profile/bin/tyacc
#
include(../../../../../build/QtCreator/txde.pri)
include(../../../../QtCreator/txde.pri)
include(../../txde.pri)
include(../../../../QtCreator/app/tyacc/tyacc.pri)

TARGET = $${tyacc_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${tyacc_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${tyacc_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${tyacc_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${tyacc_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${tyacc_HEADERS} \
$${tyacc_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${tyacc_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${tyacc_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${tyacc_LIBS} \
$${FRAMEWORKS} \

########################################################################

