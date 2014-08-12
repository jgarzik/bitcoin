

# Bitcoin Core development process


## Introduction

The Bitcoin Core development process is the
[open source](http://en.wikipedia.org/wiki/Open-source_software_development)
development process.  Much of bitcoin's development process is
common to many of other open source projects.  Knowledge, lessons
and practices from other open source projects may also be applied
to bitcoin.

Trust is a critical component in a monetary system.  In a centralized
system, trust is normally invested in a central authority, such as the
US Federal Reserve and the US Treasury investing money and time to
prevent counterfeiting of US currency.

In bitcoin, trust in math and trust in the software replaces that
central authority.  The bitcoin software validates all data from the
beginning of bitcoin's history, through present day, to ensure that no
bitcoins have been double-spent and that all currency rules have been
followed.

By extension, then, you must trust the software being used to validate
the bitcoin data in the bitcoin blockchain and on the bitcoin network.
This trust in software is achieved through open source.

Licensed under the [MIT/X11 license](http://en.wikipedia.org/wiki/MIT_License),
the Bitcoin Core software is entirely open and available to inspection
by all.  Engineers who are able to read and study source code may
convince themselves that the software achieves a high level of security.
Trust in the software is earned through study, and observation in the
field over time.

However, the open source development process is often misunderstood.
Expectations may sometimes be misplaced.  It is the aim of this document
to explain how bitcoin software development works, and how organizations
and individuals may contribute to bitcoin development.


## How is this different?

Most software that you buy or download comes in a compiled, ready
to run version.  Compiled means the program code that the developer
created, known as source code, has run through a special program called
a compiler that translates the source code into a form the computer
can understand.  It is extremely difficult to modify the compiled
version of most apps.  It is also difficult to see exactly how the
developer created different parts of each program.  Most commercial
software manufacturers view this as a competitive advantage, and do
not release the source code.

To make an analogy, closed source software is buying a car with the
hood welded shut.

Open source software is the opposite.  The source code is included.
Modification and customization is actually encouraged.  By allowing
anybody to inspect, use and modify the bitcoin software, this will lead
to a more secure, more useful, more error-free program in the long term.
Tricks such as [back doors](http://en.wikipedia.org/wiki/Backdoor_(computing))
are much more difficult to hide in open source software.

Although commercial ventures often lead open source projects, this
ethos of modification and customization leads to a credo of "scratch
your own itch."  This pithy phrase implies that you should not wait for
someone else to change the software the way you like; anyone may submit
a change that is then reviewed and incorporated into the software.

Open source ensures a healthy check-and-balance upon the existing software creators.


## Forking: How To Fire Your Developers

At a higher level, open source helps ensure against failure of the
primary software producer(s).  With closed source software, if a company
goes out of business, that software simply stops being updated.

With open source software, anyone with requisite skills may update the
software, keeping it alive and useful for existing users.

This also serves as a check-and-balance against software producers who
fail to adequately serve their users.  
