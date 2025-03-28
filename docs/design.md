# Design Overview

## Technical Considerations

- Support multiple operating systems (identify and change based off OS)
- follow the XDG Base Directory Specification
- must be compiled and added to PATH for universal directory support
- implement file permissions on actual data
- env vars to figure out config paths

## Design Considerations

- going to have users
- users will have the ability to create note files or password files (or same?)
- password required to login to user, but password can be simple (no strict hardline rules)
- have program launch nano (?) or develop
