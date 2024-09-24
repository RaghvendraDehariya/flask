# ed2k-link
# Autogenerated from man page /data/data/com.termux/files/usr/share/man/man1/ed2k-link.1.gz
complete -c ed2k-link -l printf -l template -d 'To output all sums use the `-a\' option'
complete -c ed2k-link -s c -l check -d 'Check hash files specified by command line'
complete -c ed2k-link -s u -l update -d 'Update the hash file specified by the option'
complete -c ed2k-link -l missing -d 'Read the hash file and print missing and inaccessible files, it contains'
complete -c ed2k-link -l unverified -d 'Print files that can\'t be verified by the hash file'
complete -c ed2k-link -s k -l check-embedded -d 'Verify files by crc32 sum embedded in their names'
complete -c ed2k-link -l torrent -d 'Create a torrent file for each processed file'
complete -c ed2k-link -s h -l help -d 'Help: print help screen and exit'
complete -c ed2k-link -s V -l version -d 'Version: print version and exit'
complete -c ed2k-link -s B -l benchmark -d 'Run benchmark for the selected hash algorithm(s)'
complete -c ed2k-link -s C -l crc32 -d 'CRC32: Select CRC32 checksum algorithm'
complete -c ed2k-link -l crc32c -d 'CRC32C: Select CRC32C checksum algorithm'
complete -c ed2k-link -l md4 -d 'MD4: Select MD4 hash function'
complete -c ed2k-link -s M -l md5 -d 'MD5: Select MD5 hash function'
complete -c ed2k-link -s H -l sha1 -d 'SHA1: Select SHA1 hash function'
complete -c ed2k-link -l sha224 -l sha256 -l sha384 -l sha512 -d 'Select specified SHA2 hash function'
complete -c ed2k-link -l sha3-224 -l sha3-256 -l sha3-384 -l sha3-512 -d 'Select specified SHA3 hash function'
complete -c ed2k-link -l tiger -d 'Tiger: Select Tiger hash function'
complete -c ed2k-link -s T -l tth -d 'TTH: Select DC++ TTH hash function'
complete -c ed2k-link -l btih -d 'BTIH: Select BitTorrent Info Hash'
complete -c ed2k-link -s A -l aich -d 'AICH: Select AICH hash function'
complete -c ed2k-link -s E -l ed2k -d 'ED2K: Select eDonkey 2000 hash function'
complete -c ed2k-link -s L -l ed2k-link -d 'eDonkey link: calculate and print eDonkey link'
complete -c ed2k-link -s W -l whirlpool -d 'Whirlpool: Select Whirlpool hash function'
complete -c ed2k-link -s G -l gost12-256 -d 'GOST-2012: Select 256-bit GOST R 34'
complete -c ed2k-link -l gost12-512 -d 'GOST-2012: Select 512-bit GOST R 34'
complete -c ed2k-link -l gost94 -d 'GOST-94: Select GOST R 34. 11-94, the deprecated Russian hash function'
complete -c ed2k-link -l gost94-cryptopro -d 'GOST-94-CRYPTOPRO: Select the CryptoPro version of the deprecated Russian GOS…'
complete -c ed2k-link -l ripemd160 -d 'RIPEMD-160: Select RIPEMD-160 hash function'
complete -c ed2k-link -l has160 -d 'HAS-160: Select HAS-160 hash function'
complete -c ed2k-link -l snefru128 -l snefru256 -d 'SNEFRU: Select SNEFRU-128/256 hash function'
complete -c ed2k-link -l edonr256 -l edonr512 -d 'EDON-R: Select EDON-R 256/512 hash function'
complete -c ed2k-link -l blake2b -l blake2s -d 'BLAKE2: Select BLAKE2b/BLAKE2s hash function'
complete -c ed2k-link -s a -l all -d 'Calculate all supported hash functions'
complete -c ed2k-link -l list-hashes -d 'List names of all supported hash functions, one per line'
complete -c ed2k-link -s r -l recursive -d 'Recursively process directories, specified by command line'
complete -c ed2k-link -l follow -d 'Follow symbolic links when processing files or directories recursively'
complete -c ed2k-link -s m -l message -d 'Calculate message digests of the given text message'
complete -c ed2k-link -l file-list -d 'Process given file as a file-list'
complete -c ed2k-link -s v -l verbose -d 'Be verbose'
complete -c ed2k-link -l brief -d 'Print brief form of verification report (without a header and footer), when v…'
complete -c ed2k-link -s P -l percents -d 'Show percents, while calculating or checking sums'
complete -c ed2k-link -l skip-ok -d 'Don\'t print OK messages for successfully verified files'
complete -c ed2k-link -l ignore-missing -d 'Ignore missing files, while verifying a hash file'
complete -c ed2k-link -s i -l ignore-case -d 'Ignore case of filenames when updating crc files'
complete -c ed2k-link -l speed -d 'Print per-file and the total processing speed'
complete -c ed2k-link -s e -l embed-crc -d 'Rename files by inserting crc32 sum into name'
complete -c ed2k-link -l embed-crc-delimiter -d 'Insert specified <delimiter> before a crc sum in the --embed-crc mode, defaul…'
complete -c ed2k-link -l path-separator -d 'Use specified path separator to display paths'
complete -c ed2k-link -s q -l accept -d 'Set a comma-delimited list of extensions of the files to process'
complete -c ed2k-link -l exclude -d 'Set a comma-delimited list of extensions of the files to exclude from process…'
complete -c ed2k-link -s t -l crc-accept -d 'Set a comma-delimited list of extensions of the hash files to verify'
complete -c ed2k-link -l max-depth -d 'Descend at most <levels> (a non-negative integer) levels of directories below…'
complete -c ed2k-link -s o -l output -d 'Set the file to output calculated message digests or verification results to'
complete -c ed2k-link -s l -l log -d 'Set the file to log errors and verbose information to'
complete -c ed2k-link -l openssl -d 'Specify which hash functions should be calculated using the OpenSSL library'
complete -c ed2k-link -l gost-reverse -d 'Reverse bytes in hexadecimal output of a GOST hash functions'
complete -c ed2k-link -l bt-batch -d 'Turn on torrent batch mode (implies torrent mode)'
complete -c ed2k-link -l bt-private -d 'Generate torrent file or BTIH for a private BitTorrent tracker'
complete -c ed2k-link -l bt-transmission -d 'Generate torrent file or BTIH compatible with Transmission torrent client'
complete -c ed2k-link -l bt-piece-length -d 'Set the piece length value for torrent file'
complete -c ed2k-link -l bt-announce -d 'Add a tracker announce URL to the created torrent file(s)'
complete -c ed2k-link -l benchmark-raw -d 'Switch benchmark output format to be a machine-readable tab-delimited text wi…'
complete -c ed2k-link -l no-detect-by-ext -d 'Do not detect hash function by an extension of hash file, in the --check mode'
complete -c ed2k-link -l no-path-escaping -d 'Turn off escape characters in file paths'
complete -c ed2k-link -l sfv -d 'Print message digests in the SFV (Simple File Verification) output format (de…'
complete -c ed2k-link -s g -l magnet -d 'Print message digests formatted as magnet links'
complete -c ed2k-link -l bsd -d 'Use BSD output format'
complete -c ed2k-link -l simple -d 'Use simple output format'
complete -c ed2k-link -l hex -d 'Print message digests in hexadecimal format'
complete -c ed2k-link -l base32 -d 'Print message digests in Base32 format'
complete -c ed2k-link -s b -l base64 -d 'Print message digests in Base64 format'
complete -c ed2k-link -l uppercase -d 'Print message digests in upper case'
complete -c ed2k-link -l lowercase -d 'Print message digests in lower case'
complete -c ed2k-link -s p -d 'Format: print format string the standard output, interpreting `\' escapes and …'

