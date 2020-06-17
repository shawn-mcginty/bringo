[@react.component]
let make = () =>
  <MaterialUi_WithStyles
    classes=SharedClasses.classes
    render={classes =>
      MaterialUi.(
        <>
          <NavBar classes />
          <main>
            <Container maxWidth=`Md>
              <Paper className=classes##mainPaper>
                {React.string("test")}
              </Paper>
            </Container>
          </main>
        </>
      )
    }
  />;