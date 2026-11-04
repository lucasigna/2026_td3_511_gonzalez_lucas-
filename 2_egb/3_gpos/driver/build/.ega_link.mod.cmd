savedcmd_ega_link.mod := printf '%s\n'   ega_link.o | awk '!x[$$0]++ { print("./"$$0) }' > ega_link.mod
