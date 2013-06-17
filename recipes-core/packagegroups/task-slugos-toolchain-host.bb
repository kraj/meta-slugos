require recipes-core/packagegroups/packagegroup-core-standalone-sdk-target.bb
PR = "r1"
DESCRIPTION = "Packages for a standalone SlugOS external toolchain"
ALLOW_EMPTY_${PN} = "1"

PACKAGES = "${PN}"

RDEPENDS_${PN} += "\
    devio-sdk \
"
