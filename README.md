# Reason bindings for [Gestalt](https://github.com/pinterest/gestalt)

The bindings are a work in progress, I'm adding things on the go. If you miss anything, or want to see something change, feel free to send me a PR.

## Installation
```
yarn add bs-gestalt
yarn add gestalt
```

Add `bs-gestalt` to your `bs-dependencies` in `bsconfig.json`.

```json
{
  "bs-dependencies": ["bs-gestalt"]
}
```

## Usage

```reason
open Gestalt;

[@react.component]
let make = () =>
  <Box display=`flex alignContent=`around>
    {React.string("Hello World!")}
  </Box>;
```

## Components

* [x] Box
* [ ] Text
* [ ] Heading
* [ ] Column
* [ ] ...
