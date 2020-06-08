[@react.component]
let make = () =>
  <MaterialUi_WithStyles
    classes=[
      {
        name: "buttonMargin",
        styles:
          ReactDOMRe.Style.make(~marginLeft="6px", ~marginRight="6px", ()),
      },
      {
        name: "pageTopMargin",
        styles: ReactDOMRe.Style.make(~marginTop="7vh", ()),
      },
    ]
    render={classes =>
      MaterialUi.(
        <section>
          <Container maxWidth=`Sm>
            {React.string("Bad thing happen")}
          </Container>
        </section>
      )
    }
  />;