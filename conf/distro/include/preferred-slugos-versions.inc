#===========================================================================#
#===========================================================================#
#                              NOTE NOTE NOTE
#
# This *forces* the preferred kernel version; making it unable to be overridden
# in the local.conf file.  This is a Very Bad Thing.  This is temporary, and
# is intended to facilitate some SlugOS-specific testing without disturbing
# other distros that use the ixp4xx machine type (which is currently where the
# preferred kernel version is set).
#
# This *must* be removed after initial testing is completed.  MJW 08-Dec-2008
#
SRCREV_pn-linux-ixp4xx ?= "1091"
PREFERRED_VERSION_linux-ixp4xx = "2.6.37+svnr${SRCREV}"
#
#===========================================================================#
#===========================================================================#

### Standard package preferred versions go here, sorted
### alphabetically.  Note that the main slugos.inc file
### may include preferred versions for toolchain components.

PREFERRED_VERSION_nslu2-linksys-firmware	?= "2.3r63"
PREFERRED_VERSION_udev				?= "118"
