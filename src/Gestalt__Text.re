[@bs.module "gestalt"] [@react.component]
external make:
  (
    ~align: [@bs.string] [ | `left | `right | `center | `justify]=?,
    ~bold: bool=?,
    ~children: React.element,
    ~color: [@bs.string] [
              | `blue
              | `darkGray
              | `darkWash
              | `eggplant
              | `gray
              | `green
              | `lightGray
              | `lightWash
              | `maroon
              | `midnight
              | `navy
              | `olive
              | `orange
              | `orchid
              | `pine
              | `purple
              | `red
              | `transparent
              | `transparentDarkGray
              | `watermelon
              | `white
            ]
              =?,
    ~inline: bool=?,
    ~italic: bool=?,
    ~leading: [@bs.string] [ | `short | `tall]=?,
    ~overflow: [@bs.string] [ | `normal | `breakWord]=?,
    ~size: [@bs.string] [ | `xs | `sm | `md | `lg | `xl]=?,
    ~smSize: [@bs.string] [ | `xs | `sm | `md | `lg | `xl]=?,
    ~mdSize: [@bs.string] [ | `xs | `sm | `md | `lg | `xl]=?,
    ~lgSize: [@bs.string] [ | `xs | `sm | `md | `lg | `xl]=?,
    ~truncate: bool=?
  ) =>
  React.element =
  "Text";
