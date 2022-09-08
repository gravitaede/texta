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
#   File: txde.pri
#
# Author: $author$
#   Date: 9/8/2022
#
# os specific QtCreator project .pri file for framework txde
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
TXDE_OS = macosx
} else {
contains(UNAME,Linux) {
TXDE_OS = linux
} else {
TXDE_OS = windows
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(BUILD_OS,TXDE_OS) {
TXDE_BUILD = $${TXDE_OS}
} else {
TXDE_BUILD = $${BUILD_OS}
} # contains(BUILD_OS,TXDE_OS)

contains(BUILD_CPP_VERSION,10) {
CONFIG += c++0x
} else {
contains(BUILD_CPP_VERSION,98|03|11|14|17) {
CONFIG += c++$${BUILD_CPP_VERSION}
} else {
} # contains(BUILD_CPP_VERSION,98|03|11|14|17)
} # contains(BUILD_CPP_VERSION,10)

contains(TXDE_OS,macosx) {
contains(DARWIN_VERSION_NUMBER,11+) {
QMAKE_CFLAGS += -Wno-implicit-function-declaration
} # contains(DARWIN_VERSION_NUMBER,11+)
} else {
contains(TXDE_OS,linux) {
QMAKE_CXXFLAGS += -fpermissive
} else {
contains(TXDE_OS,windows) {
} else {
} # contains(TXDE_OS,windows)
} # contains(TXDE_OS,linux)
} # contains(TXDE_OS,macosx)
########################################################################
# txde

# txde INCLUDEPATH
#
txde_INCLUDEPATH += \

# txde DEFINES
#
txde_DEFINES += \

# txde os LIBS
#
contains(TXDE_OS,macosx|linux) {
txde_os_LIBS += \
-lpthread \
-ldl
} else {
} # contains(TXDE_OS,macosx|linux)

contains(TXDE_OS,linux) {
txde_os_LIBS += \
-lrt
} else {
} # contains(TXDE_OS,linux)


# txde base LIBS
#
txde_base_LIBS += \


# txde LIBS
#
txde_LIBS += \
$${txde_base_LIBS} \
$${build_txde_LIBS} \
$${txde_os_LIBS} \

