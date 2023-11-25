const reviewListComponent = {
    props: {
        avaliacoes: {
            type: Array,
            required: true
        }
    },
    template: /*html*/`
        <div class="review-container">
            <h3>Avaliações:</h3>
                <ul>
                    <li v-for="(avaliacao, index) in avaliacoes" :key="indice">
                    {{ avaliacao.nome }} deu {{ avaliacao.nota }} estrelas
                    <br/>
                    "{{ avaliacao.avalicao }}"
                    <br/>
                    </li>
                </ul>
        </div>`

}

export default reviewListComponent;