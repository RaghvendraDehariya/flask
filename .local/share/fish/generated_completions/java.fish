# java
# Autogenerated from man page /data/data/com.termux/files/usr/share/man/man1/java.1.gz
complete -c java -l release -d 'If the file does not have the . java extension, the'
complete -c java -l source -d 'command to use the source-file mode'
complete -c java -l add-exports -l add-modules
complete -c java -l limit-modules -l patch-module
complete -c java -l upgrade-module-path -d options
complete -c java -l name
complete -c java -o agentlib:libname -d 'Loads the specified native agent library'
complete -c java -o agentlib:jdwp
complete -c java -o agentpath:pathname -d 'Loads the native agent library specified by the absolute path name'
complete -c java -l class-path -o classpath -o cp -d 'A semicolon (;) separated list of directories, JAR archives, and ZIP archives…'
complete -c java -l disable-@files -d 'Can be used anywhere on the command line, including in an argument file, to p…'
complete -c java -l enable-preview -d 'Allows classes to depend on preview features [https://docs. oracle'
complete -c java -l module-path -s p -d 'A semicolon (;) separated list of directories in which each directory is a di…'
complete -c java -l list-modules -d 'Lists the observable modules and then exits'
complete -c java -s d -l describe-module -d 'Describes a specified module and then exits'
complete -c java -l dry-run -d 'Creates the VM but doesn[aq]t execute the main method'
complete -c java -l validate-modules -d 'Validates all modules and exit'
complete -c java -o Dproperty -d 'Sets a system property value'
complete -c java -o disableassertions -o da -d 'Disables assertions'
complete -c java -o enableassertions -o ea -d 'Both options can be used at the same time'
complete -c java -o disablesystemassertions -o dsa -d 'Disables assertions in all system classes'
complete -c java -o enablesystemassertions -o esa -d 'Enables assertions in all system classes'
complete -c java -o help -s h -s '?' -d 'Prints the help message to the error stream'
complete -c java -l help -d 'Prints the help message to the output stream'
complete -c java -o javaagent:jarpath -d 'Loads the specified Java programming language agent.  See java. lang'
complete -c java -l show-version -d 'Prints the product version to the output stream and continues'
complete -c java -o showversion -d 'Prints the product version to the error stream and continues'
complete -c java -l show-module-resolution -d 'Shows module resolution output during startup'
complete -c java -o splash:imagepath -d 'Shows the splash screen with the image specified by imagepath'
complete -c java -o 'splash:images/splash.gif' -d 'See the SplashScreen API documentation for more information'
complete -c java -o verbose:class -d 'Displays information about each loaded class'
complete -c java -o verbose:gc -d 'Displays information about each garbage collection (GC) event'
complete -c java -o verbose:jni -d 'Displays information about the use of native methods and other Java Native In…'
complete -c java -o verbose:module -d 'Displays information about the modules in use'
complete -c java -l version -d 'Prints product version to the output stream and exits'
complete -c java -o version -d 'Prints product version to the error stream and exits'
complete -c java -s X -d 'Prints the help on extra options to the error stream'
complete -c java -l help-extra -d 'Prints the help on extra options to the output stream'
complete -c java -o Xbatch -d 'Disables background compilation'
complete -c java -o Xbootclasspath/a:directories -d 'Specifies a list of directories, JAR files, and ZIP archives to append to the…'
complete -c java -o Xcheck:jni -d 'Performs additional checks for Java Native Interface (JNI) functions'
complete -c java -o Xdebug -d 'Does nothing.  Provided for backward compatibility'
complete -c java -o Xdiag -d 'Shows additional diagnostic messages'
complete -c java -o Xint -d 'Runs the application in interpreted-only mode'
complete -c java -o Xinternalversion -d 'Displays more detailed JVM version information than the'
complete -c java -o Xlog:option -d 'Configure or enable logging with the Java Virtual Machine (JVM) unified loggi…'
complete -c java -o Xmixed -d 'Executes all bytecode by the interpreter except for hot methods, which are co…'
complete -c java -o Xmn -d 'Sets the initial and maximum size (in bytes) of the heap for the young genera…'
complete -c java -o Xmn256m
complete -c java -o Xmn262144k
complete -c java -o Xmn268435456 -d 'Instead of the -Xmn option to set both the initial and maximum size of the he…'
complete -c java -o XX:NewSize
complete -c java -o XX:MaxNewSize
complete -c java -o Xms -d 'Sets the minimum and initial size (in bytes) of the heap'
complete -c java -o Xms6291456
complete -c java -o Xms6144k
complete -c java -o Xms6m -d 'Instead of the -Xms option to set both the minimum and initial size of the he…'
complete -c java -o Xmx -d 'Specifies the maximum size (in bytes) of the heap'
complete -c java -o Xmx83886080
complete -c java -o Xmx81920k
complete -c java -o Xmx80m -d 'The -Xmx option is equivalent to -XX:MaxHeapSize'
complete -c java -o Xnoclassgc -d 'Disables garbage collection (GC) of classes'
complete -c java -o Xrs -d 'Reduces the use of operating system signals by the JVM'
complete -c java -o Xshare:mode -d 'Sets the class data sharing (CDS) mode'
complete -c java -o XshowSettings -d 'Shows all settings and then continues'
complete -c java -o XshowSettings:category -d 'Shows settings and continues'
complete -c java -o Xss -d 'Sets the thread stack size (in bytes)'
complete -c java -o Xss1m
complete -c java -o Xss1024k
complete -c java -o Xss1048576 -d 'This option is similar to -XX:ThreadStackSize'
complete -c java -l add-reads -d 'Updates module to read the target-module, regardless of the module declaration'
complete -c java -l add-opens -d 'Updates module to open package to target-module, regardless of module declara…'
complete -c java -o XstartOnFirstThread -d 'Runs the main() method on the first (AppKit) thread'
complete -c java -o Xdock:name -d 'Overrides the default application name displayed in dock'
complete -c java -o Xdock:icon -d 'Overrides the default icon displayed in dock.  ADVANCED OPTIONS FOR JAVA'
complete -c java -o XX:+UnlockDiagnosticVMOptions -d 'Unlocks the options intended for diagnosing the JVM'
complete -c java -o XX:+UnlockExperimentalVMOptions -d 'Unlocks the options that provide experimental features in the JVM'
complete -c java -o XX:ActiveProcessorCount -d 'Overrides the number of CPUs that the VM will use to calculate the size of th…'
complete -c java -o XX:AllocateHeapAt -d 'Takes a path to the file system and uses memory mapping to allocate the objec…'
complete -c java -o XX:-CompactStrings -d 'Disables the Compact Strings feature.  By default, this option is enabled'
complete -c java -o XX:ErrorFile -d 'Specifies the path and file name to which error data is written when an irrec…'
complete -c java -o XX:+ExtensiveErrorReports -d 'Enables the reporting of more extensive error information in the ErrorFile'
complete -c java -o XX:FlightRecorderOptions:parameter -d 'Sets the parameters that control the behavior of JFR'
complete -c java -o XX:LargePageSizeInBytes -d 'Sets the maximum size (in bytes) for large pages used for the Java heap'
complete -c java -o XX:MaxDirectMemorySize -d 'Sets the maximum total size (in bytes) of the java'
complete -c java -o XX:-MaxFDLimit -d 'Disables the attempt to set the soft limit for the number of open file descri…'
complete -c java -o XX:NativeMemoryTracking -d 'Specifies the mode for tracking JVM native memory usage'
complete -c java -o XX:ObjectAlignmentInBytes -d 'Sets the memory alignment of Java objects (in bytes)'
complete -c java -o XX:OnError -d 'Sets a custom command or a series of semicolon-separated commands to run when…'
complete -c java -o XX:OnOutOfMemoryError -d 'Sets a custom command or a series of semicolon-separated commands to run when…'
complete -c java -o XX:+PrintCommandLineFlags -d 'Enables printing of ergonomically selected JVM flags that appeared on the com…'
complete -c java -o XX:+PreserveFramePointer -d 'Selects between using the RBP register as a general purpose register (-XX:-Pr…'
complete -c java -o XX:+PrintNMTStatistics -d 'Enables printing of collected native memory tracking data at JVM exit when na…'
complete -c java -o XX:SharedArchiveFile -d 'Specifies the path and name of the class data sharing (CDS) archive file See …'
complete -c java -o XX:SharedArchiveConfigFile -d 'Specifies additional shared data added to the archive file'
complete -c java -o XX:SharedClassListFile -d 'Specifies the text file that contains the names of the classes to store in th…'
complete -c java -o XX:+ShowCodeDetailsInExceptionMessages -d 'Enables printing of improved NullPointerException messages'
complete -c java -o XX:+ShowMessageBoxOnError -d 'Enables the display of a dialog box when the JVM experiences an irrecoverable…'
complete -c java -o XX:StartFlightRecording:parameter -d 'Starts a JFR recording for the Java application'
complete -c java -o XX:ThreadStackSize -d 'Sets the Java thread stack size (in kilobytes)'
complete -c java -o XX:-UseCompressedOops -d 'Disables the use of compressed pointers'
complete -c java -o XX:-UseContainerSupport -d 'The VM now provides automatic container detection support, which allows the V…'
complete -c java -o XX:+UseHugeTLBFS -d 'Linux only: This option is the equivalent of specifying'
complete -c java -o XX:+UseLargePages -d 'This option is disabled by default'
complete -c java -o XX:+UseTransparentHugePages -d 'Linux only: Enables the use of large pages that can dynamically grow or shrink'
complete -c java -o XX:+AllowUserSignalHandlers -d 'Enables installation of signal handlers by the application'
complete -c java -o XX:VMOptionsFile -d 'Allows user to specify VM options in a file, for example, java -XX:VMOptionsF…'
complete -c java -o XX:AllocateInstancePrefetchLines -d 'Sets the number of lines to prefetch ahead of the instance allocation pointer'
complete -c java -o XX:AllocatePrefetchDistance -d 'Sets the size (in bytes) of the prefetch distance for object allocation'
complete -c java -o XX:AllocatePrefetchInstr -d 'Sets the prefetch instruction to prefetch ahead of the allocation pointer'
complete -c java -o XX:AllocatePrefetchLines -d 'Sets the number of cache lines to load after the last object allocation by us…'
complete -c java -o XX:AllocatePrefetchStepSize -d 'Sets the step size (in bytes) for sequential prefetch instructions'
complete -c java -o XX:AllocatePrefetchStyle -d 'Sets the generated code style for prefetch instructions'
complete -c java -o XX:+BackgroundCompilation -d 'Enables background compilation.  This option is enabled by default'
complete -c java -o XX:-BackgroundCompilation
complete -c java -o XX:CICompilerCount -d 'Sets the number of compiler threads to use for compilation'
complete -c java -o XX:+UseDynamicNumberOfCompilerThreads -d 'Dynamically create compiler thread up to the limit specified by'
complete -c java -o XX:CompileCommand -d 'Specifies a command to perform on a method'
complete -c java -o XX:+LogCompilation
complete -c java -o XX:CompileCommandFile
complete -c java -o XX:CompilerDirectivesFile -d 'Adds directives from a file to the directives stack when a program starts'
complete -c java -o XX:+CompilerDirectivesPrint -d 'Prints the directives stack when the program starts or when a new directive i…'
complete -c java -o XX:CompileOnly -d 'Sets the list of methods (separated by commas) to which compilation should be…'
complete -c java -o XX:CompileThresholdScaling -d 'Provides unified control of first compilation'
complete -c java -o XX:+DoEscapeAnalysis -d 'Enables the use of escape analysis.  This option is enabled by default'
complete -c java -o XX:-DoEscapeAnalysis
complete -c java -o XX:InitialCodeCacheSize -d 'Sets the initial code cache size (in bytes)'
complete -c java -o XX:+Inline -d 'Enables method inlining'
complete -c java -o XX:InlineSmallCode -d 'Sets the maximum code size (in bytes) for already compiled methods that may b…'
complete -c java -o XX:LogFile -d 'By default, this option is disabled and compilation activity isn[aq]t logged'
complete -c java -o XX:+PrintCompilation
complete -c java -o XX:FreqInlineSize -d 'Sets the maximum bytecode size (in bytes) of a hot method to be inlined'
complete -c java -o XX:MaxInlineSize -d 'Sets the maximum bytecode size (in bytes) of a cold method to be inlined'
complete -c java -o XX:C1MaxInlineSize -d 'Sets the maximum bytecode size (in bytes) of a cold method to be inlined'
complete -c java -o XX:MaxTrivialSize -d 'Sets the maximum bytecode size (in bytes) of a trivial method to be inlined'
complete -c java -o XX:C1MaxTrivialSize -d 'Sets the maximum bytecode size (in bytes) of a trivial method to be inlined'
complete -c java -o XX:MaxNodeLimit -d 'Sets the maximum number of nodes to be used during single method compilation'
complete -c java -o XX:NonNMethodCodeHeapSize -d 'Sets the size in bytes of the code segment containing nonmethod code'
complete -c java -o XX:NonProfiledCodeHeapSize -d 'Sets the size in bytes of the code segment containing nonprofiled methods'
complete -c java -o XX:+OptimizeStringConcat -d 'Enables the optimization of String concatenation operations'
complete -c java -o XX:+PrintAssembly -d 'Enables printing of assembly code for bytecoded and native methods by using t…'
complete -c java -o XX:UnlockDiagnosticVMOptions -d 'JVM options'
complete -c java -o XX:ProfiledCodeHeapSize -d 'Sets the size in bytes of the code segment containing profiled methods'
complete -c java -o XX:+PrintInlining -d 'Enables printing of inlining decisions'
complete -c java -o XX:ReservedCodeCacheSize -d 'Sets the maximum code cache size (in bytes) for JIT-compiled code'
complete -c java -o XX:RTMAbortRatio -d 'Specifies the RTM abort ratio is specified as a percentage (%) of all execute…'
complete -c java -o XX:RTMRetryCount -d 'Specifies the number of times that the RTM locking code is retried, when it i…'
complete -c java -o XX:+SegmentedCodeCache -d 'Enables segmentation of the code cache'
complete -c java -o XX:StartAggressiveSweepingAt -d 'Forces stack scanning of active methods to aggressively remove unused code wh…'
complete -c java -o XX:-TieredCompilation -d 'Disables the use of tiered compilation.  By default, this option is enabled'
complete -c java -o XX:UseSSE -d 'Enables the use of SSE instruction set of a specified version'
complete -c java -o XX:UseAVX -d 'Enables the use of AVX instruction set of a specified version'
complete -c java -o XX:+UseAES -d 'Enables hardware-based AES intrinsics for hardware that supports it'
complete -c java -o XX:+UseAESIntrinsics -d 'Enables AES intrinsics'
complete -c java -o XX:-UseAES -o XX:-UseAESIntrinsics -d 'For example, to enable hardware AES, use the following flags:'
complete -c java -o XX:+UseAESCTRIntrinsics -d 'Analogous to -XX:+UseAESIntrinsics enables AES/CTR intrinsics'
complete -c java -o XX:+UseGHASHIntrinsics -d 'Controls the use of GHASH intrinsics'
complete -c java -o XX:+UseBASE64Intrinsics -d 'Controls the use of accelerated BASE64 encoding routines for java. util'
complete -c java -o XX:+UseAdler32Intrinsics -d 'Controls the use of Adler32 checksum algorithm intrinsic for java. util. zip'
complete -c java -o XX:+UseCRC32Intrinsics -d 'Controls the use of CRC32 intrinsics for java. util. zip. CRC32'
complete -c java -o XX:+UseCRC32CIntrinsics -d 'Controls the use of CRC32C intrinsics for java. util. zip. CRC32C'
complete -c java -o XX:+UseSHA -d 'Enables hardware-based intrinsics for SHA crypto hash functions for some hard…'
complete -c java -o XX:-UseSHA -d 'To disable only a particular SHA intrinsic, use the appropriate corresponding…'
complete -c java -o XX:+UseSHA1Intrinsics -d 'Enables intrinsics for SHA-1 crypto hash function'
complete -c java -o XX:+UseSHA256Intrinsics -d 'Enables intrinsics for SHA-224 and SHA-256 crypto hash functions'
complete -c java -o XX:+UseSHA512Intrinsics -d 'Enables intrinsics for SHA-384 and SHA-512 crypto hash functions'
complete -c java -o XX:+UseMathExactIntrinsics -d 'Enables intrinsification of various java. lang. Math. *Exact() functions'
complete -c java -o XX:+UseMultiplyToLenIntrinsic -d 'Enables intrinsification of BigInteger. multiplyToLen()'
complete -c java -o XX:+UseSquareToLenIntrinsic -d 'Enables intrinsification of BigInteger. squareToLen()'
complete -c java -o XX:+UseMulAddIntrinsic -d 'Enables intrinsification of BigInteger. mulAdd()'
complete -c java -o XX:+UseMontgomeryMultiplyIntrinsic -d 'Enables intrinsification of BigInteger. montgomeryMultiply()'
complete -c java -o XX:+UseMontgomerySquareIntrinsic -d 'Enables intrinsification of BigInteger. montgomerySquare()'
complete -c java -o XX:+UseCMoveUnconditionally -d 'Generates CMove (scalar and vector) instructions regardless of profitability …'
complete -c java -o XX:+UseCodeCacheFlushing -d 'Enables flushing of the code cache before shutting down the compiler'
complete -c java -o XX:+UseCondCardMark -d 'Enables checking if the card is already marked before updating the card table'
complete -c java -o XX:+UseCountedLoopSafepoints -d 'Keeps safepoints in counted loops'
complete -c java -o XX:LoopStripMiningIter -d 'Controls the number of iterations in the inner strip mined loop'
complete -c java -o XX:LoopStripMiningIterShortLoop -d 'Controls loop strip mining optimization'
complete -c java -o XX:+UseFMA -d 'Enables hardware-based FMA intrinsics for hardware where FMA instructions are…'
complete -c java -o XX:+UseRTMDeopt -d 'Autotunes RTM locking depending on the abort ratio'
complete -c java -o XX:+UseRTMLocking -d 'Generates Restricted Transactional Memory (RTM) locking code for all inflated…'
complete -c java -o XX:+UseSuperWord -d 'Enables the transformation of scalar operations into superword operations'
complete -c java -o XX:+DisableAttachMechanism -d 'Disables the mechanism that lets tools attach to the JVM'
complete -c java -o XX:+ExtendedDTraceProbes -d 'Linux and macOS: Enables additional dtrace tool probes that affect the perfor…'
complete -c java -o XX:+HeapDumpOnOutOfMemoryError -d 'Enables the dumping of the Java heap to a file in the current directory by us…'
complete -c java -o XX:HeapDumpPath -d 'By default, this option is disabled and the heap isn[aq]t dumped when an OutO…'
complete -c java -o XX:+PrintClassHistogram -d 'Enables printing of a class instance histogram after one of the following eve…'
complete -c java -o XX:+PrintConcurrentLocks -d 'Enables printing of java. util'
complete -c java -o XX:+PrintFlagsRanges -d 'Prints the range specified and allows automatic testing of the values'
complete -c java -o XX:+PerfDataSaveToFile -d 'If enabled, saves jstat binary data when the Java application exits'
complete -c java -o XX:+UsePerfData -d 'Enables the perfdata feature'
complete -c java -o XX:-UsePerfData -d 'ADVANCED GARBAGE COLLECTION OPTIONS FOR JAVA'
complete -c java -o XX:+AggressiveHeap -d 'Enables Java heap optimization'
complete -c java -o XX:+AlwaysPreTouch -d 'Requests the VM to touch every page on the Java heap after requesting it from…'
complete -c java -o XX:ConcGCThreads -d 'Sets the number of threads used for concurrent GC'
complete -c java -o XX:+DisableExplicitGC -d 'Enables the option that disables processing of calls to the System'
complete -c java -o XX:+ExplicitGCInvokesConcurrent -d 'Enables invoking of concurrent GC by using the System. gc() request'
complete -c java -o XX:+UseG1GC
complete -c java -o XX:G1AdaptiveIHOPNumInitialSamples -d 'When -XX:UseAdaptiveIHOP is enabled, this option sets the number of completed…'
complete -c java -o XX:InitiatingHeapOccupancyPercent -d 'Before, G1 uses the value of'
complete -c java -o XX:G1HeapRegionSize -d 'Sets the size of the regions into which the Java heap is subdivided when usin…'
complete -c java -o XX:G1HeapWastePercent -d 'Sets the percentage of heap that you[aq]re willing to waste'
complete -c java -o XX:G1MaxNewSizePercent -d 'Sets the percentage of the heap size to use as the maximum for the young gene…'
complete -c java -o XX:G1MixedGCCountTarget -d 'Sets the target number of mixed garbage collections after a marking cycle to …'
complete -c java -o XX:G1MixedGCLiveThresholdPercent -d 'Sets the occupancy threshold for an old region to be included in a mixed garb…'
complete -c java -o XX:G1OldCSetRegionLiveThresholdPercent
complete -c java -o XX:G1NewSizePercent -d 'Sets the percentage of the heap to use as the minimum for the young generatio…'
complete -c java -o XX:G1OldCSetRegionThresholdPercent -d 'Sets an upper limit on the number of old regions to be collected during a mix…'
complete -c java -o XX:G1ReservePercent -d 'Sets the percentage of the heap (0 to 50) that[aq]s reserved as a false ceili…'
complete -c java -o XX:+G1UseAdaptiveIHOP -d 'Controls adaptive calculation of the old generation occupancy to start backgr…'
complete -c java -o XX:InitialHeapSize -d 'Sets the initial size (in bytes) of the memory allocation pool'
complete -c java -o XX:InitialRAMPercentage -d 'Sets the initial amount of memory that the JVM will use for the Java heap bef…'
complete -c java -o XX:InitialSurvivorRatio -d 'Sets the initial survivor space ratio used by the throughput garbage collecto…'
complete -c java -o XX:-UseAdaptiveSizePolicy
complete -c java -o XX:SurvivorRatio -d 'survivor space for the entire execution of the application'
complete -c java -o XX:MaxGCPauseMillis -d 'Sets a target for the maximum GC pause time (in milliseconds)'
complete -c java -o XX:MaxHeapSize -d 'Sets the maximum size (in byes) of the memory allocation pool'
complete -c java -o XX:MaxHeapFreeRatio -d 'Sets the maximum allowed percentage of free heap space (0 to 100) after a GC …'
complete -c java -o XX:MinHeapFreeRatio -d 'Lowering MaxHeapFreeRatio to as low as 10% and MinHeapFreeRatio to 5% has suc…'
complete -c java -o XX:-ShrinkHeapInSteps -d 'See Performance Tuning Examples for a description of using this option to kee…'
complete -c java -o XX:MaxMetaspaceSize -d 'Sets the maximum amount of native memory that can be allocated for class meta…'
complete -c java -o XX:MaxRAM -d 'Sets the maximum amount of memory that the JVM may use for the Java heap befo…'
complete -c java -o XX:MaxRAMPercentage -d 'Sets the maximum amount of memory that the JVM may use for the Java heap befo…'
complete -c java -o XX:MinRAMPercentage -d 'Sets the maximum amount of memory that the JVM may use for the Java heap befo…'
complete -c java -o XX:MaxTenuringThreshold -d 'Sets the maximum tenuring threshold for use in adaptive GC sizing'
complete -c java -o XX:MetaspaceSize -d 'Sets the size of the allocated class metadata space that triggers a garbage c…'
complete -c java -o XX:MinHeapSize -d 'Sets the minimum size (in bytes) of the memory allocation pool'
complete -c java -o XX:NewRatio -d 'Sets the ratio between young and old generation sizes'
complete -c java -o XX:ParallelGCThreads -d 'Sets the number of the stop-the-world (STW) worker threads'
complete -c java -o XX:+ParallelRefProcEnabled -d 'Enables parallel reference processing.  By default, this option is disabled'
complete -c java -o XX:+PrintAdaptiveSizePolicy -d 'Enables printing of information about adaptive-generation sizing'
complete -c java -o XX:+ScavengeBeforeFullGC -d 'Enables GC of the young generation before each full GC'
complete -c java -o XX:SoftRefLRUPolicyMSPerMB -d 'Sets the amount of time (in milliseconds) a softly reachable object is kept a…'
complete -c java -o XX:StringDeduplicationAgeThreshold -d 'Identifies String objects reaching the specified age that are considered cand…'
complete -c java -o XX:TargetSurvivorRatio -d 'Sets the desired percentage of survivor space (0 to 100) used after young gar…'
complete -c java -o XX:TLABSize -d 'Sets the initial size (in bytes) of a thread-local allocation buffer (TLAB)'
complete -c java -o XX:+UseAdaptiveSizePolicy -d 'Enables the use of adaptive generation sizing'
complete -c java -o XX:+UseGCOverheadLimit -d 'Enables the use of a policy that limits the proportion of time spent by the J…'
complete -c java -o XX:-UseGCOverheadLimit
complete -c java -o XX:+UseNUMA -d 'Enables performance optimization of an application on a machine with nonunifo…'
complete -c java -o XX:+UseParallelGC -d 'Enables the use of the parallel scavenge garbage collector (also known as the…'
complete -c java -o XX:+UseSerialGC -d 'Enables the use of the serial garbage collector'
complete -c java -o XX:+UseSHM -d 'Linux only: Enables the JVM to use shared memory to set up large pages'
complete -c java -o XX:+UseStringDeduplication -d 'Enables string deduplication.  By default, this option is disabled'
complete -c java -o XX:+UseTLAB -d 'Enables the use of thread-local allocation blocks (TLABs) in the young genera…'
complete -c java -o XX:+UseZGC -d 'Enables the use of the Z garbage collector (ZGC)'
complete -c java -o XX:ZAllocationSpikeTolerance -d 'Sets the allocation spike tolerance for ZGC'
complete -c java -o XX:ZCollectionInterval -d 'Sets the maximum interval (in seconds) between two GC cycles when using ZGC'
complete -c java -o XX:ZFragmentationLimit -d 'Sets the maximum acceptable heap fragmentation (in percent) for ZGC'
complete -c java -o XX:+ZProactive -d 'Enables proactive GC cycles when using ZGC'
complete -c java -o XX:+ZUncommit -d 'Enables uncommitting of unused heap memory when using ZGC'
complete -c java -o XX:ZUncommitDelay -d 'Sets the amount of time (in seconds) that heap memory must have been unused b…'
complete -c java -l illegal-access -d 'When present at run time, --illegal-access= takes a keyword parameter to spec…'
complete -c java -l jdk-internals -d 'For performance reasons, the current JDK does not issue warnings for illegal …'
complete -c java -o Xfuture -d 'Enables strict class-file format checks that enforce close conformance to the…'
complete -c java -o Xloggc:filename -d 'Sets the file to which verbose GC events information should be redirected for…'
complete -c java -o Xlog:gc:filename -d 'See Enable Logging with the JVM Unified Logging Framework.  Example:'
complete -c java -o 'Xlog:gc:garbage-collection.log'
complete -c java -o XX:+FlightRecorder -d 'Enables the use of Java Flight Recorder (JFR) during the runtime of the appli…'
complete -c java -o XX:InitialRAMFraction -d 'Sets the initial amount of memory that the JVM may use for the Java heap befo…'
complete -c java -o XX:MaxRAMFraction -d 'Sets the maximum amount of memory that the JVM may use for the Java heap befo…'
complete -c java -o XX:MinRAMFraction -d 'Sets the maximum amount of memory that the JVM may use for the Java heap befo…'
complete -c java -o XX:+UseBiasedLocking -d 'Enables the use of biased locking'
complete -c java -o XX:+UseMembar -d 'Enabled issuing membars on thread-state transitions'
complete -c java -o XX:MaxPermSize -d 'Sets the maximum permanent generation space size (in bytes)'
complete -c java -o XX:PermSize -d 'Sets the space (in bytes) allocated to the permanent generation that triggers…'
complete -c java -o XX:+TraceClassLoading -d 'Enables tracing of classes as they are loaded'
complete -c java -o Xlog:class+load -d 'See Enable Logging with the JVM Unified Logging Framework'
complete -c java -o XX:+TraceClassLoadingPreorder -d 'Enables tracing of all loaded classes in the order in which they[aq]re refere…'
complete -c java -o Xlog:class+preorder -d 'See Enable Logging with the JVM Unified Logging Framework'
complete -c java -o XX:+TraceClassResolution -d 'Enables tracing of constant pool resolutions'
complete -c java -o Xlog:class+resolve -d 'See Enable Logging with the JVM Unified Logging Framework'
complete -c java -o XX:+TraceLoaderConstraints -d 'Enables tracing of the loader constraints recording'
complete -c java -o Xlog:class+loader+constraints -d 'See Enable Logging with the JVM Unified Logging Framework'
complete -c java -o Xlog:codecache -d 'To see the code heap state when a "CodeCache full" condition exists, start th…'
complete -c java -o 'Xlog[:output-options' -d 'what Specifies a combination of tags and levels of the form tag1[+tag2'
complete -c java -o Xlog -d 'Enables JVM logging on an info level'
complete -c java -o Xlog:help -d 'Prints -Xlog usage syntax and available tags, levels, and decorators along wi…'
complete -c java -o Xlog:disable -d 'Turns off all logging and clears all configuration of the logging framework i…'
complete -c java -o Xlog:all
complete -c java -o Xlog:gc+region -d 'T}	T{ Not Applicable T} T{ GCLogFileSize T}	T{ No configuration available T}	…'
complete -c java -o 'Xlog:gc+ergo*' -d 'T}	T{ Use a level of debug for most of the information, or a level of trace f…'
complete -c java -o Xlog:gc -d 'T}	T{ Not Applicable T} T{ PrintGCApplicationConcurrentTime T}	T{'
complete -c java -o Xlog:safepoint -d 'T}	T{ Note that PrintGCApplicationConcurrentTime and PrintGCApplicationStoppe…'
complete -c java -o 'Xlog:gc*' -d 'T}	T{ Not Applicable T} T{ PrintGCID T}	T{ Not Applicable T}	T{ GC ID is now …'
complete -c java -o 'Xlog:gc+task*' -d 'T}	T{ Not Applicable T} T{ PrintGCTimeStamps T}	T{ Not Applicable T}	T{ Time …'
complete -c java -o Xlog:gc+heap -d 'T}	T{ Not Applicable T} T{ PrintReferenceGC T}	T{'
complete -c java -o 'Xlog:gc+ref*' -d 'T}	T{ Note that in the old logging, PrintReferenceGC had an effect only if Pr…'
complete -c java -o 'Xlog:gc+age*' -d 'T}	T{ Use a level of debug for the most relevant information, or a level of t…'
complete -c java -o Xlog:exceptions -d 'T}	T{ Not Applicable T} T{ TraceClassLoading T}	T{'
complete -c java -o Xlog:class+unload -d 'T}	T{ Use level=info for regular information, or level=trace for additional i…'
complete -c java -o Xlog:verification -d 'T}	T{ Not Applicable T} T{ TraceClassPaths T}	T{'
complete -c java -o Xlog:class+path -d 'T}	T{ Not Applicable T} T{ TraceClassResolution T}	T{'
complete -c java -o Xlog:class+init -d 'T}	T{ Not Applicable T} T{ TraceLoaderConstraints T}	T{'
complete -c java -o Xlog:class+loader+data -d 'T}	T{ Use level=debug for regular information or level=trace for additional i…'
complete -c java -o Xlog:safepoint+cleanup -d 'T}	T{ Not Applicable T} T{ TraceSafepoint T}	T{'
complete -c java -o Xlog:monitorinflation -d 'T}	T{ Not Applicable T} T{ TraceBiasedLocking T}	T{'
complete -c java -o Xlog:biasedlocking -d 'T}	T{ Use level=info for regular information, or level=trace for additional i…'
complete -c java -o 'Xlog:redefine+class*' -d 'T}	T{ level=info, debug, and trace provide increasing amounts of information'
complete -c java -o Xlog:gc+ref -d 'Logs messages tagged with both gc and ref tags, using the debug level to stdo…'
complete -c java -o Xlog:gc::uptime -d 'Logs messages tagged with the gc tag using the default [aq]info[aq] level to …'
complete -c java -o 'Xlog:gc+class*' -d 'Logs messages tagged with at least gc and class tags using the debug level to…'
complete -c java -o 'Xlog:gc+meta*' -d 'Logs messages tagged with at least the gc and meta tags using the trace level…'
complete -c java -o Xlog:gc+meta -d 'Logs messages tagged with exactly the gc and meta tags using the trace level …'
complete -c java -o 'Xlog:gc+class+heap*' -d 'Logs messages tagged with at least gc, class, and heap tags using the trace l…'
complete -c java -o Xbootclasspath/a -d '[bu] 2 With -XX:+UseAppCDS, a non-empty directory could not exist in the -Xbo…'
complete -c java -o XX:DumpLoadedClassList -d 'generated classlist with all classes (both system library classes and applica…'
complete -c java -s m -d 'module_name [bu] 2 To run with a CDS archive using the --module-path VM optio…'
complete -c java -o Xshare:dump -d 'T}	T{'
complete -c java -l module -d 'T}	T{ Allowed T}	T{ Allowed T} T{'
complete -c java -l add-module -d 'T}	T{ Allowed T}	T{ Allowed T} T{'
complete -c java -o XX:ArchiveClassesAtExit -d 'command line for running the Java application'

