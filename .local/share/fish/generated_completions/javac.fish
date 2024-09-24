# javac
# Autogenerated from man page /data/data/com.termux/files/usr/share/man/man1/javac.1.gz
complete -c javac -o Aname
complete -c javac -o proc:only
complete -c javac -s d
complete -c javac -l module-version
complete -c javac -o Akey -d 'Specifies options to pass to annotation processors'
complete -c javac -l add-modules -d 'Specifies root modules to resolve in addition to the initial modules, or all …'
complete -c javac -l boot-class-path -o bootclasspath -d 'Overrides the location of the bootstrap class files'
complete -c javac -o source -o target -d 'details.  For JDK 9 or later, see --system'
complete -c javac -l class-path -o classpath -o cp -d 'Specifies where to find user class files and annotation processors'
complete -c javac -l source-path -o 'sourcepath`' -d 'specified, then the user class path is also searched for source files'
complete -c javac -o deprecation -d 'Shows a description of each use or override of a deprecated member or class'
complete -c javac -o Xlint:deprecation
complete -c javac -l enable-preview -d 'Enables preview language features'
complete -c javac -l release
complete -c javac -o encoding -d 'Specifies character encoding used by source files, such as EUC-JP and UTF-8'
complete -c javac -o endorseddirs -d 'Overrides the location of the endorsed standards path'
complete -c javac -o extdirs -d 'Overrides the location of the installed extensions'
complete -c javac -s g -d 'Generates all debugging information, including local variables'
complete -c javac -o 'g:[lines' -d 'Generates only the kinds of debugging information specified by the comma-sepa…'
complete -c javac -o g:none -d 'Does not generate debugging information'
complete -c javac -s h -d 'Specifies where to place generated native header files'
complete -c javac -l help -o help -s '?' -d 'Prints a synopsis of the standard options'
complete -c javac -l help-extra -s X -d 'Prints a synopsis of the set of extra options'
complete -c javac -o 'implicit:[none' -d 'Specifies whether or not to generate class files for implicitly referenced fi…'
complete -c javac -o implicit:class -l - -d '[bu] 2'
complete -c javac -o implicit:none
complete -c javac -o Joption -d 'Passes option to the runtime system, where option is one of the Java options …'
complete -c javac -s J -d launcher
complete -c javac -l limit-modules -d 'Limits the universe of observable modules'
complete -c javac -l module -s m -d 'Compiles those source files in the named modules that are newer than the corr…'
complete -c javac -l module-path -s p -d 'Specifies where to find application modules'
complete -c javac -l module-source-path -d 'Specifies where to find source files when compiling code in multiple modules'
complete -c javac -o nowarn -d 'Disables warning messages'
complete -c javac -o parameters -d 'Generates metadata for reflection on method parameters'
complete -c javac -o 'proc:[none' -d 'Controls whether annotation processing and compilation are done'
complete -c javac -o proc:none -d 'annotation processing'
complete -c javac -o processor -d 'Names of the annotation processors to run'
complete -c javac -l processor-module-path -d 'Specifies the module path used for finding annotation processors'
complete -c javac -l processor-path -o processorpath -d 'Specifies where to find annotation processors'
complete -c javac -o profile -d 'Checks that the API used is available in the specified profile'
complete -c javac -l source/-source
complete -c javac -l target/-target
complete -c javac -s s -d 'Specifies the directory used to place the generated source files'
complete -c javac -l source -d 'Compiles source code according to the rules of the Java programming language …'
complete -c javac -o sourcepath -d 'Specifies where to find source files'
complete -c javac -l system -d 'Overrides the location of system modules'
complete -c javac -l target -d 'Generates class files suitable for the specified Java SE release'
complete -c javac -l upgrade-module-path -d 'Overrides the location of upgradeable modules'
complete -c javac -o verbose -d 'Outputs messages about what the compiler is doing'
complete -c javac -l version -o version -d 'Prints version information'
complete -c javac -o Werror -d 'Terminates compilation when warnings occur.  Extra Options'
complete -c javac -l add-exports -d 'Specifies a package to be considered as exported from its defining module to …'
complete -c javac -l add-reads -d 'Specifies additional modules to be considered as required by a given module'
complete -c javac -l default-module-for-created-files -d 'Specifies the fallback target module for files created by annotation processo…'
complete -c javac -o 'Djava.endorsed.dirs' -d 'Overrides the location of the endorsed standards path'
complete -c javac -o 'Djava.ext.dirs' -d 'Overrides the location of installed extensions'
complete -c javac -l patch-module -d 'Overrides or augments a module with classes and resources in JAR files or dir…'
complete -c javac -o Xbootclasspath:path -d 'Overrides the location of the bootstrap class files'
complete -c javac -o Xbootclasspath/a:path -d 'Adds a suffix to the bootstrap class path'
complete -c javac -o Xbootclasspath/p:path -d 'Adds a prefix to the bootstrap class path'
complete -c javac -o 'Xdiags:[compact' -d 'Selects a diagnostic mode'
complete -c javac -o Xdoclint -d 'Enables recommended checks for problems in javadoc comments'
complete -c javac -o Xdoclint:all/protected -d 'The following option enables all groups of checks for all access levels, exce…'
complete -c javac -o Xdoclint:all -o html/package
complete -c javac -o Xdoclint/package:packages -d 'Enables or disables checks in specific packages'
complete -c javac -o Xlint -d 'Enables all recommended warnings'
complete -c javac -o Xlint:key -d 'Supplies warnings to enable or disable, separated by comma'
complete -c javac -o Xmaxerrs -d 'Sets the maximum number of errors to print'
complete -c javac -o Xmaxwarns -d 'Sets the maximum number of warnings to print'
complete -c javac -o 'Xpkginfo:[always' -d 'Specifies when and how the javac command generates package-info'
complete -c javac -o Xplugin:name -d 'Specifies the name and optional arguments for a plug-in to be run'
complete -c javac -o 'Xprefer:[source' -d 'Specifies which file to read when both a source file and class file are found…'
complete -c javac -o Xprefer:newer -d 'for a type (default).  [bu] 2'
complete -c javac -o Xprefer:source -d 'Use -Xprefer:source when you want to be sure that any annotation processors c…'
complete -c javac -o Xprint -d 'Prints a textual representation of specified types for debugging purposes'
complete -c javac -o XprintProcessorInfo -d 'Prints information about which annotations a processor is asked to process'
complete -c javac -o XprintRounds -d 'Prints information about initial and subsequent annotation processing rounds'
complete -c javac -o Xstdout -d 'Sends compiler messages to the named file'
complete -c javac -o implicit -d 'warning that the file is being compiled without being subject to annotation p…'
complete -c javac -l add-opens
complete -c javac -o Xbootclasspath/p
complete -c javac -o Xbootclasspath
complete -c javac -o Xbootclasspath/a

