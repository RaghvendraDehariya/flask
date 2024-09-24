# gh-release-create
# Autogenerated from man page /data/data/com.termux/files/usr/share/man/man1/gh-release-create.1.gz
complete -c gh-release-create -l discussion-category -d 'Start a discussion in the specified category'
complete -c gh-release-create -s d -l draft -d 'Save the release as a draft instead of publishing it'
complete -c gh-release-create -l generate-notes -d 'Automatically generate title and notes for the release'
complete -c gh-release-create -l latest -d 'Mark this release as "Latest" (default [automatic based on date and version])'
complete -c gh-release-create -s n -l notes -d 'Release notes'
complete -c gh-release-create -s F -l notes-file -d 'Read release notes from file (use "-" to read from standard input)'
complete -c gh-release-create -l notes-from-tag -d 'Automatically generate notes from annotated tag'
complete -c gh-release-create -l notes-start-tag -d 'Tag to use as the starting point for generating release notes'
complete -c gh-release-create -s p -l prerelease -d 'Mark the release as a prerelease'
complete -c gh-release-create -l target -d 'Target branch or full commit SHA (default [main branch])'
complete -c gh-release-create -s t -l title -d 'Release title'
complete -c gh-release-create -l verify-tag -d 'Abort in case the git tag doesn\'t already exist in the remote repository OPTI…'
complete -c gh-release-create -s R -l repo -d 'Select another repository using the [HOST/]OWNER/REPO format EXAMPLE'

