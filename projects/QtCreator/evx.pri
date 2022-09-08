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
# generic QtCreator project .pri file for framework evx
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
# evx
EVX_NAME = evx
EVX_SOURCE = source/$${EVX_NAME}
EVX_CREDS = creds

EVX_PKG = ../../../../..
EVX_BLD = ../..

EVX_PRJ = $${EVX_PKG}
EVX_BIN = $${EVX_BLD}/bin
EVX_LIB = $${EVX_BLD}/lib
EVX_SRC = $${EVX_PKG}/$${EVX_SOURCE}
EVX_CRD_SRC = $${EVX_PKG}/$${EVX_CREDS}/$${EVX_SOURCE}

# evx BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
evx_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
evx_DEFINES += RELEASE_BUILD
}

########################################################################
# evdb
EVDB_NAME = evdebug

# evdb FRAMEWORKS
#
evdb_FRAMEWORKS += \

# evdb LIBS
#
evdb_LIBS += \
-L$${EVX_LIB}/lib$${EVDB_NAME} \
-l$${EVDB_NAME} \

########################################################################
# evc
EV2C_NAME = ev2crypto
EVC_NAME = evcrypto

# evc FRAMEWORKS
#
evc_FRAMEWORKS += \

# evc LIBS
#
evc_LIBS += \
$${evc_FRAMEWORKS} \
-L$${EVX_LIB}/lib$${EV2C_NAME} \
-l$${EV2C_NAME} \
-L$${EVX_LIB}/lib$${EVC_NAME} \
-l$${EVC_NAME} \

########################################################################
# evrsa
EVBN_NAME = evbn

# evrsa FRAMEWORKS
#
evrsa_FRAMEWORKS += \

evcrsa_LIBS += \
-L$${EVX_LIB}/lib$${EVBN_NAME} \
-l$${EVBN_NAME} \

########################################################################
# evx INCLUDEPATH
#
evx_INCLUDEPATH += \
$${EVX_SRC}/ev2c/ev2crypto \
$${EVX_SRC}/ev2c/crypto \
$${EVX_SRC}/ev2c \
$${EVX_SRC}/evc \
$${EVX_SRC}/ev2c/mpint/bn \
$${EVX_SRC}/evcrypto \
$${EVX_SRC}/os/evdebug \
$${EVX_SRC}/os/evx \
$${EVX_SRC}/os \
$${EVX_SRC}/base \
$${EVX_SRC} \
$${EVX_CRD_SRC} \
$${build_evx_INCLUDEPATH} \

# evx DEFINES
#
evx_DEFINES += \
$${build_evx_DEFINES} \

# evx LIBS
#
evx_LIBS += \
-L$${EVX_LIB}/lib$${EVX_NAME} \
-l$${EVX_NAME} \
