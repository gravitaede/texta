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
#   File: evx.pri
#
# Author: $author$
#   Date: 9/8/2022
#
# os specific QtCreator project .pri file for framework evx
########################################################################

UNAME = $$system(uname)

contains(UNAME,Darwin) {
DARWIN_VERSION = $$system(sw_vers -productVersion)
} else {
contains(UNAME,Linux) {
LINUX_VERSION = $$system(uname -r)
} else {
contains(UNAME,Windows) {
WINDOWS_VERSION = $$system(ver)
} else {
} # contains(UNAME,Windows)
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(UNAME,Darwin) {
contains(DARWIN_VERSION,11.5.1) {
DARWIN_VERSION_NAME = Bigsur
DARWIN_VERSION_NUMBER = 11+
} else {
contains(DARWIN_VERSION,10.12.6) {
DARWIN_VERSION_NAME = Sierra
DARWIN_VERSION_NUMBER = 10+
} else {
DARWIN_VERSION_NAME = Mavricks
DARWIN_VERSION_NUMBER = 9+
} # contains(DARWIN_VERSION,10.12.6)
} # contains(DARWIN_VERSION,11.5.1)
} # contains(UNAME,Darwin)

contains(UNAME,Darwin) {
EVX_OS = macosx
} else {
contains(UNAME,Linux) {
EVX_OS = linux
} else {
EVX_OS = windows
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(BUILD_OS,EVX_OS) {
EVX_BUILD = $${EVX_OS}
} else {
EVX_BUILD = $${BUILD_OS}
} # contains(BUILD_OS,EVX_OS)

contains(BUILD_CPP_VERSION,10) {
CONFIG += c++0x
} else {
contains(BUILD_CPP_VERSION,98|03|11|14|17) {
CONFIG += c++$${BUILD_CPP_VERSION}
} else {
} # contains(BUILD_CPP_VERSION,98|03|11|14|17)
} # contains(BUILD_CPP_VERSION,10)

contains(EVX_OS,macosx) {
contains(DARWIN_VERSION_NUMBER,11+) {
QMAKE_CFLAGS += -Wno-implicit-function-declaration
} # contains(DARWIN_VERSION_NUMBER,11+)
} else {
contains(EVX_OS,linux) {
QMAKE_CXXFLAGS += -fpermissive
} else {
contains(EVX_OS,windows) {
} else {
} # contains(EVX_OS,windows)
} # contains(EVX_OS,linux)
} # contains(EVX_OS,macosx)
########################################################################
# evx

# evx INCLUDEPATH
#
evx_INCLUDEPATH += \

# evx DEFINES
#
evx_DEFINES += \

# evx os LIBS
#
contains(EVX_OS,macosx|linux) {
evx_os_LIBS += \
-lpthread \
-ldl
} else {
} # contains(EVX_OS,macosx|linux)

contains(EVX_OS,linux) {
evx_os_LIBS += \
-lrt
} else {
} # contains(EVX_OS,linux)


# evx base LIBS
#
evx_base_LIBS += \


# evx LIBS
#
evx_LIBS += \
$${evx_base_LIBS} \
$${build_evx_LIBS} \
$${evx_os_LIBS} \

