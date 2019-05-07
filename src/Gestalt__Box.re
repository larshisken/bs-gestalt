[@bs.module "gestalt"] [@react.component]
external make:
  (
    ~ref: ReactDOMRe.Ref.t=?,
    ~alignContent: [@bs.string] [
                     | `start
                     | [@bs.as "end"] `end_
                     | `center
                     | `between
                     | `around
                     | `stretch
                   ]
                     =?,
    ~alignItems: [@bs.string] [
                   | `start
                   | [@bs.as "end"] `end_
                   | `center
                   | `baseline
                   | `stretch
                 ]
                   =?,
    ~alignSelf: [@bs.string] [
                  | `auto
                  | `start
                  | [@bs.as "end"] `end_
                  | `center
                  | `baseline
                  | `stretch
                ]
                  =?,
    ~bottom: bool=?,
    ~children: React.element=?,
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
    ~column: int=?,
    ~direction: [@bs.string] [ | `row | `column]=?,
    ~display: [@bs.string] [
                | `none
                | `flex
                | `block
                | `inlineBlock
                | `visuallyHidden
              ]
                =?,
    ~fit: bool=?,
    ~flex: [@bs.string] [ | `grow | `shrink | `none]=?,
    ~height: string=?,
    ~justifyContent: [@bs.string] [
                       | `start
                       | [@bs.as "end"] `end_
                       | `center
                       | `between
                       | `around
                     ]
                       =?,
    ~left: bool=?,
    ~margin: int=?,
    ~smMargin: bool=?,
    ~mdMargin: bool=?,
    ~lgMargin: bool=?,
    ~marginBottom: int=?,
    ~marginEnd: int=?,
    ~marginRight: int=?,
    ~marginStart: int=?,
    ~marginTop: int=?,
    ~maxHeight: string=?,
    ~maxWidth: string=?,
    ~minHeight: string=?,
    ~minWidth: string=?,
    ~overflow: [@bs.string] [
                 | `visible
                 | `hidden
                 | `scroll
                 | `scrollX
                 | `scrollY
                 | `auto
               ]
                 =?,
    ~padding: int=?,
    ~paddingX: int=?,
    ~paddingY: int=?,
    ~position: [@bs.string] [ | `static | `absolute | `relative | `fixed]=?,
    ~right: bool=?,
    ~shape: [@bs.string] [
              | `square
              | `rounded
              | `pill
              | `circle
              | `roundedTop
              | `roundedBottom
              | `roundedLeft
              | `roundedRight
            ]
              =?,
    ~top: bool=?,
    ~width: string=?,
    ~wrap: bool=?,
    ~dangerouslySetInlineStyle: Gestalt__Style.inlineStyle=?,
    unit
  ) =>
  React.element =
  "Box";
