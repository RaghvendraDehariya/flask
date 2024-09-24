# jdeps
# Autogenerated from man page /data/data/com.termux/files/usr/share/man/man1/jdeps.1.gz
complete -c jdeps -o dotoutput -d 'POSSIBLE OPTIONS'
complete -c jdeps -s '?' -s h -l help -d 'Prints the help message'
complete -c jdeps -l dot-output -d 'Specifies the destination directory for DOT file output'
complete -c jdeps -s s -o summary -d 'Prints a dependency summary only'
complete -c jdeps -s v -o verbose -d 'Prints all class-level dependencies.  This is equivalent to'
complete -c jdeps -o verbose:class -o filter:none
complete -c jdeps -o verbose:package -d 'Prints package-level dependencies excluding, by default, dependences within t…'
complete -c jdeps -o apionly -l api-only -d 'Restricts the analysis to APIs, for example, dependences from the signature o…'
complete -c jdeps -o jdkinternals -l jdk-internals -d 'Finds class-level dependences in the JDK internal APIs'
complete -c jdeps -l classpath
complete -c jdeps -o include -d 'You can[aq]t use this option with the -p, -e, and'
complete -c jdeps -o cp -o classpath -l class-path -d 'Specifies where to find class files'
complete -c jdeps -l module-path -d 'Specifies the module path'
complete -c jdeps -l upgrade-module-path -d 'Specifies the upgrade module path'
complete -c jdeps -l system -d 'Specifies an alternate system module path'
complete -c jdeps -l add-modules -d 'Adds modules to the root set for analysis'
complete -c jdeps -l multi-release -d 'Specifies the version when processing multi-release JAR files'
complete -c jdeps -s q -o quiet -d 'Doesn[aq]t show missing dependencies from'
complete -c jdeps -o generate-module-info
complete -c jdeps -o version -l version -d 'Prints version information.  MODULE DEPENDENCE ANALYSIS OPTIONS'
complete -c jdeps -s m -l module -d 'Specifies the root module for analysis'
complete -c jdeps -l generate-module-info -d 'Generates module-info. java under the specified directory'
complete -c jdeps -l generate-open-module -d 'Generates module-info'
complete -c jdeps -l check -d 'Analyzes the dependence of the specified modules'
complete -c jdeps -l list-deps -d 'Lists the module dependences and also the package names of JDK internal APIs …'
complete -c jdeps -l list-reduced-deps -d 'Same as --list-deps without listing the implied reads edges from the module g…'
complete -c jdeps -l print-module-deps -d 'Same as --list-reduced-deps with printing a comma-separated list of module de…'
complete -c jdeps -l ignore-missing-deps -d 'Ignore missing dependences.  OPTIONS TO FILTER DEPENDENCES'
complete -c jdeps -s p -o package -l package -d 'Finds dependences matching the specified package name'
complete -c jdeps -s e -o regex -l regex -d 'Finds dependences matching the specified pattern'
complete -c jdeps -l require -d 'Finds dependences matching the given module name (may be given multiple times)'
complete -c jdeps -s f -o filter -d 'Filters dependences matching the given pattern'
complete -c jdeps -o filter:package -d 'Filters dependences within the same package.  This is the default'
complete -c jdeps -o filter:archive -d 'Filters dependences within the same archive'
complete -c jdeps -o filter:module -d 'Filters dependences within the same module'
complete -c jdeps -l missing-deps -d 'Finds missing dependences.  This option cannot be used with -p, -e and'
complete -c jdeps -s P -o profile -d 'Shows the profile containing a package'
complete -c jdeps -s R -l recursive -d 'Recursively traverses all run-time dependences'
complete -c jdeps -l no-recursive -d 'Do not recursively traverse dependences'
complete -c jdeps -s I -l inverse -d 'Analyzes the dependences per other given options and then finds all artifacts…'
complete -c jdeps -l compile-time -d 'Analyzes the compile-time view of transitive dependencies, such as the compil…'

