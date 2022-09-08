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
# generic QtCreator project .pri file for framework txde
########################################################################

OTHER_RPO = ../../../../../../..
OTHER_PKG = ../../../../../..
OTHER_PRJ = ../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/source/$${THIRDPARTY_NAME}


########################################################################
# txde
TXDE_NAME = xde
TXDE_SOURCE = source
TXDE_CREDS = creds

TXDE_PKG = ../../../../..
TXDE_BLD = ../..

TXDE_PRJ = $${TXDE_PKG}
TXDE_BIN = $${TXDE_BLD}/bin
TXDE_LIB = $${TXDE_BLD}/lib
TXDE_SRC = $${TXDE_PKG}/$${TXDE_SOURCE}
TXDE_CRD_SRC = $${TXDE_PKG}/$${TXDE_CREDS}/$${TXDE_SOURCE}

# txde BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
txde_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
txde_DEFINES += RELEASE_BUILD
}

# txde INCLUDEPATH
#
txde_INCLUDEPATH += \
$${TXDE_SRC} \
$${TXDE_CRD_SRC} \
$${build_txde_INCLUDEPATH} \

# txde DEFINES
#
txde_DEFINES += \
$${build_txde_DEFINES} \

# txde LIBS
#
_txde_LIBS += \
-L$${TXDE_LIB}/lib$${TXDE_NAME} \
-l$${TXDE_NAME} \

