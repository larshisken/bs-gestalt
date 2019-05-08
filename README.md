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

* [ ] Avatar
* [ ] Badge
* [x] Box
* [x] Button
* [x] Card
* [ ] Checkbox
* [ ] Collage
* [x] Column
* [x] Container
* [ ] Divider
* [ ] Flyout
* [ ] GroupAvatar
* [ ] Heading
* [ ] Icon
* [x] IconButton
* [ ] Image
* [ ] Label
* [ ] Layer
* [ ] Letterbox
* [x] Link
* [ ] Mask
* [ ] Masonry
* [ ] Modal
* [ ] Pog
* [ ] Pulsar
* [ ] RadioButton
* [ ] SearchField
* [ ] SegmentedControl
* [ ] SelectList
* [ ] Spinner
* [ ] Sticky
* [ ] Switch
* [x] Tabs
* [ ] Text
* [ ] TextArea
* [x] TextField
* [ ] Toast
* [ ] Tooltip
* [x] Touchable
* [ ] Video
